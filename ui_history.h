/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_history
{
public:
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *history)
    {
        if (history->objectName().isEmpty())
            history->setObjectName(QStringLiteral("history"));
        history->resize(579, 433);
        history->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(history);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(378, 390, 81, 31));
        pushButton->setStyleSheet(QLatin1String("width:80px;\n"
"height:25px;\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"border-color:rgb(156, 120, 120);\n"
"background-color:rgb(220, 19, 19);\n"
"color:rgb(22, 22, 22);"));
        listWidget = new QListWidget(history);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 80, 531, 301));
        listWidget->setStyleSheet(QStringLiteral("background-color:#7CFC00;"));
        label = new QLabel(history);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 531, 61));
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
"border-color:rgb(172, 149, 149);\n"
""));
        pushButton_2 = new QPushButton(history);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 390, 81, 31));
        pushButton_2->setStyleSheet(QLatin1String("width:80px;\n"
"height:25px;\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"border-color:rgb(163, 71, 71);\n"
"background-color:#7CFC00;\n"
"color:rgb(22, 22, 22);"));

        retranslateUi(history);

        QMetaObject::connectSlotsByName(history);
    } // setupUi

    void retranslateUi(QDialog *history)
    {
        history->setWindowTitle(QApplication::translate("history", "Dialog", 0));
        pushButton->setText(QApplication::translate("history", "Select", 0));
        label->setText(QApplication::translate("history", "<html><head/><body><p><span style=\" text-decoration: underline;\">Search History</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("history", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class history: public Ui_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
