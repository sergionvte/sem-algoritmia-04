/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QDoubleSpinBox *voltaje_spinBox;
    QSpinBox *posicionY_spinBox;
    QPushButton *submit_start;
    QPushButton *submit_end;
    QLabel *label_2;
    QSpinBox *posicionX_spinBox;
    QSpinBox *id_spinBox;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *blue_spinBox;
    QLabel *label;
    QLabel *label_6;
    QTextEdit *output;
    QSpinBox *green_spinBox;
    QSpinBox *red_spinBox;
    QPushButton *show_neurons;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(536, 486);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        voltaje_spinBox = new QDoubleSpinBox(centralwidget);
        voltaje_spinBox->setObjectName("voltaje_spinBox");

        gridLayout->addWidget(voltaje_spinBox, 1, 1, 1, 1);

        posicionY_spinBox = new QSpinBox(centralwidget);
        posicionY_spinBox->setObjectName("posicionY_spinBox");

        gridLayout->addWidget(posicionY_spinBox, 3, 1, 1, 1);

        submit_start = new QPushButton(centralwidget);
        submit_start->setObjectName("submit_start");

        gridLayout->addWidget(submit_start, 7, 0, 1, 1);

        submit_end = new QPushButton(centralwidget);
        submit_end->setObjectName("submit_end");

        gridLayout->addWidget(submit_end, 7, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        posicionX_spinBox = new QSpinBox(centralwidget);
        posicionX_spinBox->setObjectName("posicionX_spinBox");

        gridLayout->addWidget(posicionX_spinBox, 2, 1, 1, 1);

        id_spinBox = new QSpinBox(centralwidget);
        id_spinBox->setObjectName("id_spinBox");

        gridLayout->addWidget(id_spinBox, 0, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        blue_spinBox = new QSpinBox(centralwidget);
        blue_spinBox->setObjectName("blue_spinBox");

        gridLayout->addWidget(blue_spinBox, 6, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        output = new QTextEdit(centralwidget);
        output->setObjectName("output");

        gridLayout->addWidget(output, 8, 0, 1, 2);

        green_spinBox = new QSpinBox(centralwidget);
        green_spinBox->setObjectName("green_spinBox");

        gridLayout->addWidget(green_spinBox, 5, 1, 1, 1);

        red_spinBox = new QSpinBox(centralwidget);
        red_spinBox->setObjectName("red_spinBox");

        gridLayout->addWidget(red_spinBox, 4, 1, 1, 1);

        show_neurons = new QPushButton(centralwidget);
        show_neurons->setObjectName("show_neurons");

        gridLayout->addWidget(show_neurons, 9, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 536, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        submit_start->setText(QCoreApplication::translate("MainWindow", "Agregar al inicio", nullptr));
        submit_end->setText(QCoreApplication::translate("MainWindow", "Agregar al final", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        show_neurons->setText(QCoreApplication::translate("MainWindow", "Mostrar informaci\303\263n de las neuronas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
