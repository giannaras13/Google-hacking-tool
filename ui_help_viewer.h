/********************************************************************************
** Form generated from reading UI file 'help_viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_VIEWER_H
#define UI_HELP_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_help_viewer
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_3;

    void setupUi(QDialog *help_viewer)
    {
        if (help_viewer->objectName().isEmpty())
            help_viewer->setObjectName(QStringLiteral("help_viewer"));
        help_viewer->resize(965, 715);
        label = new QLabel(help_viewer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 630, 581, 71));
        QFont font;
        font.setFamily(QStringLiteral("URW Gothic L"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:rgb(181, 37, 37);\n"
"color:rgb(4, 0, 0);\n"
"border-color:rgb(121, 88, 88);\n"
"horizontalOffset: 3;\n"
"\n"
"        verticalOffset: 3;\n"
"        \n"
"        "));
        label->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(help_viewer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 620, 171, 91));
        pushButton->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"background-image:url(\":/files/left.png\");"));
        pushButton->setIconSize(QSize(90, 90));
        pushButton_2 = new QPushButton(help_viewer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 620, 171, 91));
        pushButton_2->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);\n"
"background-image:url(\":/files/right.png\");"));
        pushButton_2->setIconSize(QSize(90, 90));
        label_2 = new QLabel(help_viewer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 0, 511, 61));
        QFont font1;
        font1.setPointSize(24);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"border-color:rgb(172, 149, 149);\n"
""));
        label_3 = new QLabel(help_viewer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 70, 880, 541));
        label_3->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 5px;\n"
"background-image:url(\":/files/start.png\");\n"
"border-color:rgb(172, 149, 149);"));
        label_4 = new QLabel(help_viewer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(550, 0, 301, 61));
        QFont font2;
        font2.setPointSize(20);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);"));
        pushButton_3 = new QPushButton(help_viewer);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(860, 10, 54, 51));
        pushButton_3->setStyleSheet(QLatin1String("background-image:url(\":/files/on1.png\");\n"
"background-color:rgb(89, 9, 9);\n"
"border: 3px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(163, 71, 71);\n"
""));

        retranslateUi(help_viewer);

        QMetaObject::connectSlotsByName(help_viewer);
    } // setupUi

    void retranslateUi(QDialog *help_viewer)
    {
        help_viewer->setWindowTitle(QApplication::translate("help_viewer", "Dialog", 0));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("help_viewer", "<html><head/><body><p><span style=\" text-decoration: underline;\">Help</span></p></body></html>", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("help_viewer", "TextLabel", 0));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class help_viewer: public Ui_help_viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_VIEWER_H
