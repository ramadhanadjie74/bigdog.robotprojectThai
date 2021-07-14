/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *SMILE;
    QPushButton *CONFUSE;
    QPushButton *LOVE;
    QPushButton *GLASSES;
    QPushButton *WINK;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(597, 459);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SMILE = new QPushButton(centralWidget);
        SMILE->setObjectName(QStringLiteral("SMILE"));
        SMILE->setGeometry(QRect(440, 50, 80, 22));
        CONFUSE = new QPushButton(centralWidget);
        CONFUSE->setObjectName(QStringLiteral("CONFUSE"));
        CONFUSE->setGeometry(QRect(440, 80, 80, 22));
        LOVE = new QPushButton(centralWidget);
        LOVE->setObjectName(QStringLiteral("LOVE"));
        LOVE->setGeometry(QRect(250, 360, 80, 22));
        GLASSES = new QPushButton(centralWidget);
        GLASSES->setObjectName(QStringLiteral("GLASSES"));
        GLASSES->setGeometry(QRect(20, 80, 80, 22));
        WINK = new QPushButton(centralWidget);
        WINK->setObjectName(QStringLiteral("WINK"));
        WINK->setGeometry(QRect(20, 50, 80, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 261, 331));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dog_emoji_bloodhound_square_sticker-r9f37dfb760214b5ebc9c3a1e73df2045_v9i40_8byvr_307.jpg")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 597, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        SMILE->setText(QApplication::translate("MainWindow", "SMILE", 0));
        CONFUSE->setText(QApplication::translate("MainWindow", "CONFUSE", 0));
        LOVE->setText(QApplication::translate("MainWindow", "LOVE", 0));
        GLASSES->setText(QApplication::translate("MainWindow", "GLASES", 0));
#ifndef QT_NO_TOOLTIP
        WINK->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffff00;\">WINK</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        WINK->setText(QApplication::translate("MainWindow", "WINK", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
