/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHome;
    QAction *actionSettings;
    QAction *actionDocuments;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QTextEdit *textEdit;
    QPushButton *pushButton_16;
    QLabel *label;
    QPushButton *pushButton_17;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QCheckBox *checkBox;
    QTextEdit *textEdit_2;
    QLabel *label_5;
    QCheckBox *checkBox_2;
    QLabel *label_6;
    QPushButton *pushButton_18;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(889, 586);
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        actionHome->setFont(font);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionSettings->setFont(font);
        actionDocuments = new QAction(MainWindow);
        actionDocuments->setObjectName(QStringLiteral("actionDocuments"));
        actionDocuments->setFont(font);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        actionAbout->setFont(font1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 99, 27));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("#pushButton{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"\n"
"\n"
"}"));
        pushButton->setCheckable(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 450, 99, 27));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 420, 99, 27));
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 390, 99, 27));
        pushButton_4->setStyleSheet(QLatin1String("#pushButton_4{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 360, 99, 27));
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 330, 99, 27));
        pushButton_6->setStyleSheet(QLatin1String("#pushButton_6{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 300, 99, 27));
        pushButton_7->setStyleSheet(QLatin1String("#pushButton_7{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(20, 270, 99, 27));
        pushButton_8->setStyleSheet(QLatin1String("#pushButton_8{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 240, 99, 27));
        pushButton_9->setStyleSheet(QLatin1String("#pushButton_9{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 210, 99, 27));
        pushButton_10->setStyleSheet(QLatin1String("#pushButton_10{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(20, 180, 99, 27));
        pushButton_11->setStyleSheet(QLatin1String("#pushButton_11{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(20, 150, 99, 27));
        pushButton_12->setStyleSheet(QLatin1String("#pushButton_12{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(20, 120, 99, 27));
        pushButton_13->setStyleSheet(QLatin1String("#pushButton_13{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(20, 90, 99, 27));
        pushButton_14->setStyleSheet(QLatin1String("#pushButton_14{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(20, 60, 99, 27));
        pushButton_15->setFont(font2);
        pushButton_15->setStyleSheet(QLatin1String("#pushButton_15{\n"
"\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 310, 221, 81));
        textEdit->setStyleSheet(QLatin1String("#textEdit{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:rgb(107, 106, 184);\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(150, 410, 71, 71));
        pushButton_16->setStyleSheet(QLatin1String("background-image:url(\":/files/netvibes.png\");\n"
"background-color:rgb(89, 9, 9);\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(163, 71, 71);\n"
""));
        pushButton_16->setIconSize(QSize(75, 100));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 180, 221, 81));
        QPalette palette1;
        QBrush brush1(QColor(209, 148, 148, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette1);
        label->setStyleSheet(QLatin1String("#label{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#D19494;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(230, 410, 71, 71));
        pushButton_17->setStyleSheet(QLatin1String("background-image:url(\":/files/search.png\");\n"
"background-color:rgb(89, 9, 9);\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(163, 71, 71);\n"
""));
        pushButton_17->setIconSize(QSize(85, 85));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 140, 221, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"\n"
"border-color:rgb(138, 121, 121);\n"
"}"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 270, 221, 31));
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"\n"
"border-color:rgb(138, 121, 121)\n"
"}"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 20, 171, 31));
        label_4->setFont(font3);
        label_4->setStyleSheet(QLatin1String("#label_4{\n"
"\n"
"border: 4px solid ;\n"
"border-radius:5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"\n"
"border-color:rgb(138, 121, 121)\n"
"}"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(650, 130, 191, 41));
        radioButton->setStyleSheet(QLatin1String("#radioButton{\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(410, 60, 211, 41));
        radioButton_2->setStyleSheet(QLatin1String("#radioButton_2{\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_2->setChecked(true);
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(410, 130, 211, 41));
        radioButton_3->setStyleSheet(QLatin1String("#radioButton_3{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(410, 270, 211, 41));
        radioButton_4->setStyleSheet(QLatin1String("#radioButton_4{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_5 = new QRadioButton(centralWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(650, 60, 191, 41));
        radioButton_5->setStyleSheet(QLatin1String("#radioButton_5{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_6 = new QRadioButton(centralWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(410, 200, 211, 41));
        radioButton_6->setStyleSheet(QLatin1String("#radioButton_6{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_7 = new QRadioButton(centralWidget);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(650, 270, 191, 41));
        radioButton_7->setStyleSheet(QLatin1String("#radioButton_7{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_8 = new QRadioButton(centralWidget);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(650, 200, 191, 41));
        radioButton_8->setStyleSheet(QLatin1String("#radioButton_8{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_9 = new QRadioButton(centralWidget);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(650, 410, 191, 41));
        radioButton_9->setStyleSheet(QLatin1String("#radioButton_9{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_10 = new QRadioButton(centralWidget);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(650, 340, 191, 41));
        radioButton_10->setStyleSheet(QLatin1String("#radioButton_10{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_11 = new QRadioButton(centralWidget);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(410, 410, 211, 41));
        radioButton_11->setFont(font2);
        radioButton_11->setStyleSheet(QLatin1String("#radioButton_11{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        radioButton_12 = new QRadioButton(centralWidget);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(410, 340, 211, 41));
        radioButton_12->setStyleSheet(QLatin1String("#radioButton_12{\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"}"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(580, 20, 41, 31));
        checkBox->setLayoutDirection(Qt::RightToLeft);
        checkBox->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius:5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"\n"
"border-color:rgb(138, 121, 121);"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(150, 60, 221, 61));
        textEdit_2->setStyleSheet(QLatin1String("\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:rgb(225, 231, 81);\n"
"border-color:rgb(163, 71, 71);\n"
""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 20, 221, 31));
        label_5->setFont(font3);
        label_5->setStyleSheet(QLatin1String("\n"
"\n"
"border: 4px solid ;\n"
"border-radius: 5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"\n"
"border-color:rgb(138, 121, 121)"));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(800, 20, 41, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setItalic(false);
        checkBox_2->setFont(font4);
        checkBox_2->setLayoutDirection(Qt::RightToLeft);
        checkBox_2->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius:5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"border-color:rgb(138, 121, 121);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(650, 20, 151, 31));
        QFont font5;
        font5.setPointSize(12);
        label_6->setFont(font5);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius:5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"\n"
"border-color:rgb(138, 121, 121);"));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(320, 440, 38, 38));
        pushButton_18->setStyleSheet(QLatin1String("background-image:url(\":/files/help2.png\");\n"
"background-color:rgb(89, 9, 9);\n"
"border: 3px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(14, 110, 239)\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 889, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setAcceptDrops(true);
        toolBar->setStyleSheet(QString::fromUtf8("#toolBar{\n"
"font.underline:true;\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"\n"
"background-image:url(\"/home/giannis/\316\225\317\200\316\271\317\206\316\254\316\275\316\265\316\271\316\261 \316\265\317\201\316\263\316\261\317\203\316\257\316\261\317\202/red-clouds1.jpg\");\n"
"\n"
"}\n"
""));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionHome);
        toolBar->addSeparator();
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionDocuments);
        toolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionHome->setText(QApplication::translate("MainWindow", "Default", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionDocuments->setText(QApplication::translate("MainWindow", "Search history", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        pushButton->setText(QApplication::translate("MainWindow", "title", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "email", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "subject", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "group", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "author", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "date", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "numerical", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "anchor", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "link", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "site", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "text", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "filetype", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "all in url", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "url", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "all in title", 0));
        pushButton_16->setText(QString());
        pushButton_16->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        label->setText(QString());
        pushButton_17->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Query", 0));
        label_3->setText(QApplication::translate("MainWindow", "User Selection", 0));
        label_4->setText(QApplication::translate("MainWindow", "Ready Queries", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Firewall", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Login portals", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "Printer exploit", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "sql passwords and info", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "Router scan", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "IP Phone phreaking", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "Webcam search", 0));
        radioButton_8->setText(QApplication::translate("MainWindow", "passwords exploring", 0));
        radioButton_9->setText(QApplication::translate("MainWindow", "sql schemas search", 0));
        radioButton_10->setText(QApplication::translate("MainWindow", "Smart PHP", 0));
        radioButton_11->setText(QApplication::translate("MainWindow", "Error messages search", 0));
        radioButton_12->setText(QApplication::translate("MainWindow", "DCIM search", 0));
        checkBox->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Site", 0));
        checkBox_2->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline;\">Site Selection</span></p></body></html>", 0));
        pushButton_18->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
