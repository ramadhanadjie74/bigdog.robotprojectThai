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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *LEFT;
    QVBoxLayout *verticalLayout_3;
    QPushButton *FORWARD;
    QPushButton *pushButton;
    QPushButton *BACKWARD;
    QPushButton *RIGHT;
    QSlider *verticalSlider;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLCDNumber *lcdNumber_2;
    QLabel *label_2;
    QSlider *verticalSlider_2;
    QLCDNumber *lcdNumber_3;
    QLabel *label_3;
    QSlider *verticalSlider_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(594, 432);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 581, 371));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 50, 256, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LEFT = new QPushButton(horizontalLayoutWidget);
        LEFT->setObjectName(QStringLiteral("LEFT"));

        horizontalLayout->addWidget(LEFT);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        FORWARD = new QPushButton(horizontalLayoutWidget);
        FORWARD->setObjectName(QStringLiteral("FORWARD"));

        verticalLayout_3->addWidget(FORWARD);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        BACKWARD = new QPushButton(horizontalLayoutWidget);
        BACKWARD->setObjectName(QStringLiteral("BACKWARD"));

        verticalLayout_3->addWidget(BACKWARD);


        horizontalLayout->addLayout(verticalLayout_3);

        RIGHT = new QPushButton(horizontalLayoutWidget);
        RIGHT->setObjectName(QStringLiteral("RIGHT"));

        horizontalLayout->addWidget(RIGHT);

        verticalSlider = new QSlider(groupBox);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(80, 110, 16, 160));
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(60, 70, 64, 23));
        QFont font;
        font.setPointSize(2);
        lcdNumber->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 290, 71, 16));
        label->setAlignment(Qt::AlignCenter);
        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(270, 190, 64, 23));
        lcdNumber_2->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 490, 59, 14));
        label_2->setAlignment(Qt::AlignCenter);
        verticalSlider_2 = new QSlider(groupBox);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(290, 220, 31, 121));
        verticalSlider_2->setMaximum(100);
        verticalSlider_2->setOrientation(Qt::Vertical);
        lcdNumber_3 = new QLCDNumber(groupBox);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(490, 70, 64, 23));
        lcdNumber_3->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(480, 290, 81, 16));
        label_3->setAlignment(Qt::AlignCenter);
        verticalSlider_3 = new QSlider(groupBox);
        verticalSlider_3->setObjectName(QStringLiteral("verticalSlider_3"));
        verticalSlider_3->setGeometry(QRect(510, 110, 16, 160));
        verticalSlider_3->setMaximum(100);
        verticalSlider_3->setOrientation(Qt::Vertical);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 350, 81, 16));
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 594, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(verticalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Movement Control", 0));
        LEFT->setText(QApplication::translate("MainWindow", "LEFT", 0));
        FORWARD->setText(QApplication::translate("MainWindow", "FORWARD", 0));
        pushButton->setText(QApplication::translate("MainWindow", "STOP", 0));
        BACKWARD->setText(QApplication::translate("MainWindow", "BACKWARD", 0));
        RIGHT->setText(QApplication::translate("MainWindow", "RIGHT", 0));
        label->setText(QApplication::translate("MainWindow", "left wheel", 0));
        label_2->setText(QApplication::translate("MainWindow", "SPEED", 0));
        label_3->setText(QApplication::translate("MainWindow", "right wheel", 0));
        label_4->setText(QApplication::translate("MainWindow", "back wheel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
