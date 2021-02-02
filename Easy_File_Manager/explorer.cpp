#include "explorer.h"
#include "ui_explorer.h"

Explorer::Explorer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Explorer)
{
    ui->setupUi(this);

    Folders = new QFileSystemModel(this);
    Folders->setFilter(QDir::QDir::AllEntries);
    Folders->setRootPath("");

    ui->Win_One->setModel(Folders);
    ui->Win_Two->setModel(Folders);

    connect(ui->B_Exit, &QPushButton::clicked, this, &Explorer::Exit);
}

Explorer::~Explorer()
{
    delete ui;
}

void Explorer::Exit()
{
    delete ui;
}

void Explorer::on_Win_One_doubleClicked(const QModelIndex &index)
{
    QListView* List = (QListView*) sender();

    QFileInfo fileInfo = Folders->fileInfo(index);
    if(fileInfo.fileName() == "..")
    {
        QDir dir = fileInfo.dir();
        dir.cdUp();
        List->setRootIndex(Folders->index(dir.absolutePath()));
    }
    else if(fileInfo.fileName() == ".")
    {
        List->setRootIndex(Folders->index(""));
    }
    else if(fileInfo.isDir())
    {
        List->setRootIndex(index);
    }
}

void Explorer::on_Win_Two_doubleClicked(const QModelIndex &index)
{
    QListView* List = (QListView*) sender();

    QFileInfo fileInfo = Folders->fileInfo(index);
    if(fileInfo.fileName() == "..")
    {
        QDir dir = fileInfo.dir();
        dir.cdUp();
        List->setRootIndex(Folders->index(dir.absolutePath()));
    }
    else if(fileInfo.fileName() == ".")
    {
        List->setRootIndex(Folders->index(""));
    }
    else if(fileInfo.isDir())
    {
        List->setRootIndex(index);
    }
}
