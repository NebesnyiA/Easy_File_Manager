#ifndef EXPLORER_H
#define EXPLORER_H

#include <QMainWindow>
#include <QDir>
#include <QFileSystemModel>
#include <QFile>
#include <QMessageBox>
#include <QInputDialog>
#include <QModelIndex>
#include <QUrl>

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
    void on_actionRemove_triggered();
    void on_actionNew_Folder_for_second_window_triggered();

    void on_actionRemove_for_second_window_triggered();

private:
    Ui::Explorer *ui;
    QFileSystemModel *FoldersModel;
    QFileInfo fileInfo;

};

#endif // EXPLORER_H
