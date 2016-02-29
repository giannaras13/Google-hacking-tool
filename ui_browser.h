/********************************************************************************
** Form generated from reading UI file 'browser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_browser
{
public:
    QDialogButtonBox *buttonBox;
    QWebView *webView;
    QLabel *label;

    void setupUi(QDialog *browser)
    {
        if (browser->objectName().isEmpty())
            browser->setObjectName(QStringLiteral("browser"));
        browser->resize(910, 624);
        browser->setStyleSheet(QStringLiteral("background-color:black;"));
        buttonBox = new QDialogButtonBox(browser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(530, 590, 341, 32));
        buttonBox->setStyleSheet(QLatin1String("width:80px;\n"
"height:25px;\n"
"border: 2px solid ;\n"
"border-radius: 11px;\n"
"background: qradialgradient(cx: 0, cy: 0,\n"
"fx: 0, fy: 0, \n"
");\n"
"border-color:rgb(163, 71, 71);\n"
"background-color:#7CFC00;\n"
"color:rgb(22, 22, 22)"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        webView = new QWebView(browser);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(10, 90, 861, 491));
        webView->setUrl(QUrl(QStringLiteral("http://www./")));
        label = new QLabel(browser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 10, 881, 61));
        QFont font;
        font.setPointSize(24);
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

        retranslateUi(browser);
        QObject::connect(buttonBox, SIGNAL(accepted()), browser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), browser, SLOT(reject()));

        QMetaObject::connectSlotsByName(browser);
    } // setupUi

    void retranslateUi(QDialog *browser)
    {
        browser->setWindowTitle(QApplication::translate("browser", "Dialog", 0));
        label->setText(QApplication::translate("browser", "<html><head/><body><p><span style=\" text-decoration: underline;\">Browser</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class browser: public Ui_browser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
