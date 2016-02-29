/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->setWindowModality(Qt::NonModal);
        About->resize(441, 545);
        About->setAcceptDrops(false);
        About->setAutoFillBackground(false);
        About->setStyleSheet(QStringLiteral(""));
        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(330, 500, 91, 32));
        buttonBox->setStyleSheet(QLatin1String("width:80px;\n"
"height:25px;\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"\n"
"background-color:#7CFC00;\n"
"color:rgb(22, 22, 22)"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 381, 401));
        label->setStyleSheet(QStringLiteral("background-image:url(\":/files/Untitled-1.png\");"));
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 421, 61));
        QFont font;
        font.setPointSize(26);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("border: 4px solid ;\n"
"border-radius: 5px;\n"
"\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"background-color:#FF8400;\n"
"border-color:rgb(172, 149, 149);\n"
""));
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 370, 135, 86));
        pushButton->setStyleSheet(QLatin1String("background-image:url(\":/files/button1.png\");\n"
"background-color:rgb(255, 255, 255);\n"
"border: 4px solid ;\n"
"border-radius: 11px;\n"
"border-color:rgb(226, 76, 21)\n"
""));
        pushButton->setIconSize(QSize(130, 87));

        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), About, SLOT(reject()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("About", "<html><head/><body><p><span style=\" text-decoration: underline;\">About</span></p></body></html>", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
