#ifndef EXPLORER_H
#define EXPLORER_H

#include <QMainWindow>
#include <QDir>
#include <QFileSystemModel>

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
    void Exit();

    void on_Win_One_doubleClicked(const QModelIndex &index);

    void on_Win_Two_doubleClicked(const QModelIndex &index);

private:
    Ui::Explorer *ui;
    QFileSystemModel *Folders;
};
#endif // EXPLORER_H
