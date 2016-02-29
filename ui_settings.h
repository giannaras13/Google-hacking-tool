/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->resize(437, 395);
        settings->setStyleSheet(QStringLiteral(""));
        buttonBox = new QDialogButtonBox(settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(340, 360, 91, 32));
        buttonBox->setStyleSheet(QLatin1String("width:80px;\n"
"height:25px;\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"border-color:rgb(163, 71, 71);\n"
"background-color:#7CFC00;\n"
"color:rgb(22, 22, 22);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 411, 61));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"border-color:rgb(172, 149, 149)\n"
""));
        label_2 = new QLabel(settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 371, 51));
        QFont font1;
        font1.setPointSize(24);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);"));
        label_3 = new QLabel(settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 210, 371, 51));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("border: 2px solid ;\n"
"border-radius: 11px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#7CFC00;\n"
"border-color:rgb(163, 71, 71);"));
        radioButton = new QRadioButton(settings);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(10, 270, 271, 51));
        QFont font2;
        font2.setPointSize(18);
        font2.setItalic(true);
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QLatin1String("background-image:url(\":/files/red-clouds1.jpg\");\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"border-color:white;"));
        radioButton_2 = new QRadioButton(settings);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 330, 271, 51));
        radioButton_2->setFont(font2);
        radioButton_2->setAutoFillBackground(false);
        radioButton_2->setStyleSheet(QLatin1String("background-image:url(\":/files/red-clouds1.jpg\");\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"border-color:white;"));
        pushButton = new QPushButton(settings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 55, 51));
        pushButton->setStyleSheet(QLatin1String("background-image:url(\":/files/File_Explorer.png\");\n"
"background-color:rgb(89, 9, 9);\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(163, 71, 71);"));
        pushButton->setIconSize(QSize(70, 70));
        lineEdit = new QLineEdit(settings);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 150, 301, 41));
        lineEdit->setStyleSheet(QLatin1String("background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:rgb(231, 232, 49);"));
        pushButton_3 = new QPushButton(settings);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 270, 81, 61));
        pushButton_3->setStyleSheet(QLatin1String("background-image:url(\":/files/tick.png\");\n"
"background-color:rgb(89, 9, 9);\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(163, 71, 71);"));
        pushButton_3->setIconSize(QSize(77, 77));

        retranslateUi(settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Dialog", 0));
        label->setText(QApplication::translate("settings", "<html><head/><body><p><span style=\" text-decoration: underline;\">Settings</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("settings", "<html><head/><body><p><span style=\" text-decoration: underline;\">History file Location</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("settings", "<html><head/><body><p><span style=\" text-decoration: underline;\">Browser</span></p></body></html>", 0));
        radioButton->setText(QApplication::translate("settings", "Internal Browser", 0));
        radioButton_2->setText(QApplication::translate("settings", "External Browser", 0));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
