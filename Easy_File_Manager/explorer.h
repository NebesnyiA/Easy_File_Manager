#ifndef EXPLORER_H
#define EXPLORER_H

#include <QMainWindow>
#include <QDir>
#include <QFileSystemModel>
#include <QFile>
#include <QMessageBox>
#include <QInputDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Explorer; }
QT_END_NAMESPACE

class Explorer : public QMainWindow
{
    Q_OBJECT

public:
    Explorer(QWidget *parent = nullptr);
    ~Explorer();

private slots:
    void on_Win_One_doubleClicked(const QModelIndex &index);
    void on_Win_Two_doubleClicked(const QModelIndex &index);
    void on_actionNew_Folder_triggered();
    void on_actionNew_Folder_For_second_window_triggered();

private:
    Ui::Explorer *ui;
    QFileSystemModel *FoldersModel;

};
#endif // EXPLORER_H
