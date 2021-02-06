/********************************************************************************
** Form generated from reading UI file 'explorer.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLORER_H
#define UI_EXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Explorer
{
public:
    QAction *actionNew_Folder;
    QAction *actionRemove;
    QAction *actionNew_Folder_for_second_window;
    QAction *actionRemove_for_second_window;
    QAction *actionRename_for_the_first_window;
    QAction *actionRename_for_second_window;
    QAction *actionMove_the_file_for_the_first_window;
    QAction *actionMove_the_file_for_second_window;
    QAction *actionCopy_fot_the_first_window;
    QAction *actionCopy_for_the_second_window;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QListView *Win_One;
    QListView *Win_Two;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuTools_Second_window;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Explorer)
    {
        if (Explorer->objectName().isEmpty())
            Explorer->setObjectName(QString::fromUtf8("Explorer"));
        Explorer->resize(445, 269);
        actionNew_Folder = new QAction(Explorer);
        actionNew_Folder->setObjectName(QString::fromUtf8("actionNew_Folder"));
        actionRemove = new QAction(Explorer);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        actionNew_Folder_for_second_window = new QAction(Explorer);
        actionNew_Folder_for_second_window->setObjectName(QString::fromUtf8("actionNew_Folder_for_second_window"));
        actionRemove_for_second_window = new QAction(Explorer);
        actionRemove_for_second_window->setObjectName(QString::fromUtf8("actionRemove_for_second_window"));
        actionRename_for_the_first_window = new QAction(Explorer);
        actionRename_for_the_first_window->setObjectName(QString::fromUtf8("actionRename_for_the_first_window"));
        actionRename_for_second_window = new QAction(Explorer);
        actionRename_for_second_window->setObjectName(QString::fromUtf8("actionRename_for_second_window"));
        actionMove_the_file_for_the_first_window = new QAction(Explorer);
        actionMove_the_file_for_the_first_window->setObjectName(QString::fromUtf8("actionMove_the_file_for_the_first_window"));
        actionMove_the_file_for_second_window = new QAction(Explorer);
        actionMove_the_file_for_second_window->setObjectName(QString::fromUtf8("actionMove_the_file_for_second_window"));
        actionCopy_fot_the_first_window = new QAction(Explorer);
        actionCopy_fot_the_first_window->setObjectName(QString::fromUtf8("actionCopy_fot_the_first_window"));
        actionCopy_for_the_second_window = new QAction(Explorer);
        actionCopy_for_the_second_window->setObjectName(QString::fromUtf8("actionCopy_for_the_second_window"));
        centralwidget = new QWidget(Explorer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Win_One = new QListView(centralwidget);
        Win_One->setObjectName(QString::fromUtf8("Win_One"));

        horizontalLayout->addWidget(Win_One);

        Win_Two = new QListView(centralwidget);
        Win_Two->setObjectName(QString::fromUtf8("Win_Two"));

        horizontalLayout->addWidget(Win_Two);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        Explorer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Explorer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 445, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuTools_Second_window = new QMenu(menubar);
        menuTools_Second_window->setObjectName(QString::fromUtf8("menuTools_Second_window"));
        Explorer->setMenuBar(menubar);
        statusbar = new QStatusBar(Explorer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Explorer->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuTools_Second_window->menuAction());
        menu->addAction(actionNew_Folder);
        menu->addAction(actionRemove);
        menu->addAction(actionRename_for_the_first_window);
        menu->addAction(actionMove_the_file_for_the_first_window);
        menu->addAction(actionCopy_fot_the_first_window);
        menuTools_Second_window->addAction(actionNew_Folder_for_second_window);
        menuTools_Second_window->addAction(actionRemove_for_second_window);
        menuTools_Second_window->addAction(actionRename_for_second_window);
        menuTools_Second_window->addAction(actionMove_the_file_for_second_window);
        menuTools_Second_window->addAction(actionCopy_for_the_second_window);

        retranslateUi(Explorer);

        QMetaObject::connectSlotsByName(Explorer);
    } // setupUi

    void retranslateUi(QMainWindow *Explorer)
    {
        Explorer->setWindowTitle(QCoreApplication::translate("Explorer", "Explorer", nullptr));
        actionNew_Folder->setText(QCoreApplication::translate("Explorer", "New Folder", nullptr));
        actionRemove->setText(QCoreApplication::translate("Explorer", "Remove", nullptr));
        actionNew_Folder_for_second_window->setText(QCoreApplication::translate("Explorer", "New Folder", nullptr));
        actionRemove_for_second_window->setText(QCoreApplication::translate("Explorer", "Remove", nullptr));
        actionRename_for_the_first_window->setText(QCoreApplication::translate("Explorer", "Rename", nullptr));
        actionRename_for_second_window->setText(QCoreApplication::translate("Explorer", "Rename", nullptr));
        actionMove_the_file_for_the_first_window->setText(QCoreApplication::translate("Explorer", "Move the file", nullptr));
        actionMove_the_file_for_second_window->setText(QCoreApplication::translate("Explorer", "Move the file", nullptr));
        actionCopy_fot_the_first_window->setText(QCoreApplication::translate("Explorer", "Copy", nullptr));
        actionCopy_for_the_second_window->setText(QCoreApplication::translate("Explorer", "Copy", nullptr));
        menu->setTitle(QCoreApplication::translate("Explorer", "Tools (First window)", nullptr));
        menuTools_Second_window->setTitle(QCoreApplication::translate("Explorer", "Tools (Second window)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Explorer: public Ui_Explorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORER_H
