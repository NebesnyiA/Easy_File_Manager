#ifndef EXPLORER_H
#define EXPLORER_H

#include <QMainWindow>

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
    void on_listView_2_doubleClicked(const QModelIndex &index);

private:
    Ui::Explorer *ui;
};
#endif // EXPLORER_H
