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
