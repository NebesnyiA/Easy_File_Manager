#include "explorer.h"
#include "ui_explorer.h"

Explorer::Explorer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Explorer)
{
    ui->setupUi(this);
}

Explorer::~Explorer()
{
    delete ui;
}


void Explorer::on_listView_2_doubleClicked(const QModelIndex &index)
{

}
