#include "explorer.h"
#include "ui_explorer.h"


Explorer::Explorer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Explorer)
{
    ui->setupUi(this);

    FoldersModel = new QFileSystemModel(this);
    FoldersModel->setFilter(QDir::QDir::AllEntries);
    FoldersModel->setRootPath("");

    ui->Win_One->setModel(FoldersModel);
    ui->Win_Two->setModel(FoldersModel);

    connect(ui->ExitButton, &QPushButton::clicked, this, &Explorer::Exit);
}

Explorer::~Explorer()
{
    delete ui;
}

void Explorer::on_Win_One_doubleClicked(const QModelIndex &index)
{
    // is used to move through the directories in the first window
    //

    QListView* List = (QListView*) sender();
    QFile file;
    QDir dir;

    fileInfo = FoldersModel->fileInfo(index);
    if(fileInfo.fileName() == "..")
    {
        dir = fileInfo.dir();
        dir.cdUp();
        List->setRootIndex(FoldersModel->index(dir.absolutePath()));
    }
    else if(fileInfo.fileName() == ".")
    {
        List->setRootIndex(FoldersModel->index(""));
    }
    else if(fileInfo.isDir())
    {
        List->setRootIndex(index);
    }

    // this part opens the files, pictures, and exe-files
    // does it in the first window
    //

    else if(fileInfo.isFile())
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(FoldersModel->filePath(index)));
    }
}

void Explorer::on_Win_Two_doubleClicked(const QModelIndex &index)
{
    // is used to move through the directories in the second window
    //

    QListView* List = (QListView*) sender();

    QFileInfo fileInfo = FoldersModel->fileInfo(index);
    if(fileInfo.fileName() == "..")
    {
        QDir dir = fileInfo.dir();
        dir.cdUp();
        List->setRootIndex(FoldersModel->index(dir.absolutePath()));
    }
    else if(fileInfo.fileName() == ".")
    {
        List->setRootIndex(FoldersModel->index(""));
    }
    else if(fileInfo.isDir())
    {
        List->setRootIndex(index);
    }

    // this part opens the files, pictures, and exe-files
    // does it in the second window
    //

    else if(fileInfo.isFile())
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(FoldersModel->filePath(index)));
    }
}

void Explorer::on_actionNew_Folder_triggered()
{
    // create new folder in the first window
    //

    QModelIndex index = ui->Win_One->currentIndex();

    if(!index.isValid())
    {
        return;
    }
    QString NewFolderName = QInputDialog::getText(this, "New Folder", "Enter the name of the folder:");

    if(NewFolderName.isEmpty())
    {
        return;
    }

    FoldersModel->mkdir(index, NewFolderName);
}

void Explorer::on_actionNew_Folder_for_second_window_triggered()
{
    // create new folder in the second window
    //

    QModelIndex index = ui->Win_Two->currentIndex();

    if(!index.isValid())
    {
        return;
    }
    QString NewFolderName = QInputDialog::getText(this, "New Folder", "Enter the name of the folder:");

    if(NewFolderName.isEmpty())
    {
        return;
    }

    FoldersModel->mkdir(index, NewFolderName);
}

void Explorer::on_actionRemove_triggered()
{
    // removes the file or folder in the first window
    //

    QModelIndex index = ui->Win_One->currentIndex();

    if(FoldersModel->fileInfo(index).isFile())
    {
        FoldersModel->remove(index);
    }
    else if(FoldersModel->fileInfo(index).isDir())
    {
        FoldersModel->rmdir(index);
    }
}



void Explorer::on_actionRemove_for_second_window_triggered()
{
    // removes the file or folder in the second window
    //

    QModelIndex index = ui->Win_Two->currentIndex();

    if(FoldersModel->fileInfo(index).isFile())
    {
        FoldersModel->remove(index);
    }
    else if(FoldersModel->fileInfo(index).isDir())
    {
        FoldersModel->rmdir(index);
    }
}

void Explorer::on_actionRename_for_the_first_window_triggered()
{
    // renames the files and folders, and saves everything, what has been inside of the folder
    // is made for the first window
    //

    QModelIndex index = ui->Win_One->currentIndex();
    QFile fileinf;

    QFileInfo fi(FoldersModel->filePath(index));
    QString ext = fi.suffix();

    QString filepath (QFileInfo(FoldersModel->filePath(index)).absolutePath());

    QString NewName = QInputDialog::getText(this, "New Name", "Enter new name:");

    QFile::rename(FoldersModel->filePath(index), filepath + '/' + NewName + '.' + ext);
}

void Explorer::on_actionRename_for_second_window_triggered()
{
    // also renames the folders and files, but does it in the second window
    //

    QModelIndex index = ui->Win_Two->currentIndex();

    QFileInfo fi(FoldersModel->filePath(index));
    QString ext = fi.suffix();

    QString filepath (QFileInfo(FoldersModel->filePath(index)).absolutePath());

    QString NewName = QInputDialog::getText(this, "New Name", "Enter new name:");

    QFile::rename(FoldersModel->filePath(index), filepath + '/' + NewName + '.' + ext);
}

void Explorer::on_actionMove_the_file_for_the_first_window_triggered()
{
    // is used to move the files from the first window to the second one
    //

    QModelIndex PastIndex = ui->Win_One->currentIndex();
    QModelIndex NewIndex = ui->Win_Two->currentIndex();

    QFileInfo fi(FoldersModel->filePath(PastIndex));
    QString Name = fi.fileName();

    QFile::rename(FoldersModel->filePath(PastIndex), FoldersModel->filePath(NewIndex) + '/' + Name);
}

void Explorer::on_actionMove_the_file_for_second_window_triggered()
{
    // is used to move the files from the second window to the first one
    //

    QModelIndex PastIndex = ui->Win_Two->currentIndex();
    QModelIndex NewIndex = ui->Win_One->currentIndex();

    QFileInfo fi(FoldersModel->filePath(PastIndex));
    QString Name = fi.fileName();

    QFile::rename(FoldersModel->filePath(PastIndex), FoldersModel->filePath(NewIndex) + '/' + Name);
}

void Explorer::on_actionCopy_fot_the_first_window_triggered()
{
    // is used to copy files from the first window to the second one
    // possibility to copy dirs will be added later
    //

    QModelIndex PastIndex = ui->Win_One->currentIndex();
    QModelIndex NewIndex = ui->Win_Two->currentIndex();

    QFileInfo fi(FoldersModel->filePath(PastIndex));
    QString Name = fi.fileName();

    QFile::copy(FoldersModel->filePath(PastIndex), FoldersModel->filePath(NewIndex) + '/' + Name);
}

void Explorer::on_actionCopy_for_the_second_window_triggered()
{
    // is used to copy files from the second window to the first one
    //

    QModelIndex PastIndex = ui->Win_Two->currentIndex();
    QModelIndex NewIndex = ui->Win_One->currentIndex();

    QFileInfo fi(FoldersModel->filePath(PastIndex));
    QString Name = fi.fileName();

    QFile::copy(FoldersModel->filePath(PastIndex), FoldersModel->filePath(NewIndex) + '/' + Name);
}

void Explorer::on_actionNew_file_for_first_window_triggered()
{
    // gives a possibility to create the files
    //

    QModelIndex index = ui->Win_One->currentIndex();

    QString NewFileName = QInputDialog::getText(this, "File name", "Enter new name:");

    if(NewFileName.isEmpty())
    {
        return;
    }

    QStringList items;
    items << tr(" ") << tr(".txt") << tr(".doc") << tr(".xlsx") << tr(".fb2") << tr(".pdf");

    bool ok;
    QString NewFormat = QInputDialog::getItem(this, tr("Enter Format."),
                                              tr("Choose the format:"), items, 0, false, &ok);

    if(NewFormat == " ")
    {
        return;
    }

    QString path (QFileInfo(FoldersModel->filePath(index)).absoluteFilePath());

    QFile file(path + '/' + NewFileName + NewFormat);

    if(file.exists()){
        QMessageBox ErrorWin;
        ErrorWin.setText("Error! There is the file with such name!");
        ErrorWin.exec();
    }
    else
    {
        file.open(QIODevice::WriteOnly);
        file.close();
    }
}

void Explorer::on_actionNew_File_for_second_window_triggered()
{
    // gives a possibility to create the files
    //

    QModelIndex index = ui->Win_Two->currentIndex();

    QString NewFileName = QInputDialog::getText(this, "File name", "Enter new name:");

    if(NewFileName.isEmpty())
    {
        return;
    }

    QStringList items;
    items << (" ") << tr(".txt") << tr(".doc") << tr(".xlsx") << tr(".fb2") << tr(".pdf");

    bool ok;
    QString NewFormat = QInputDialog::getItem(this, tr("Enter Format."),
                                              tr("Choose the format:"), items, 0, false, &ok);

    if(NewFormat == " ")
    {
        return;
    }

    QString path (QFileInfo(FoldersModel->filePath(index)).absoluteFilePath());

    QFile file(path + '/' + NewFileName + NewFormat);

    qDebug() << file;

    if(file.exists()){
        QMessageBox ErrorWin;
        ErrorWin.setText("Error! There is the file with such name!");
        ErrorWin.exec();
    }
    else
    {
        file.open(QIODevice::WriteOnly);
        file.close();
    }
}

void Explorer::Exit()
{
    this->close();
}


