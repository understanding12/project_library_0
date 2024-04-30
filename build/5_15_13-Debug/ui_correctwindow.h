/********************************************************************************
** Form generated from reading UI file 'correctwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORRECTWINDOW_H
#define UI_CORRECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_correctWindow
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *startMatter;
    QLabel *label_2;
    QComboBox *startGenre;
    QLabel *label_3;
    QLineEdit *startAuthor;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *startTranslate;
    QLabel *label7;
    QLineEdit *startTime;
    QLineEdit *startPrice;
    QLineEdit *startName;

    void setupUi(QWidget *correctWindow)
    {
        if (correctWindow->objectName().isEmpty())
            correctWindow->setObjectName(QString::fromUtf8("correctWindow"));
        correctWindow->resize(448, 296);
        pushButton = new QPushButton(correctWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 120, 91, 31));
        widget = new QWidget(correctWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 230, 240));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 4);

        startMatter = new QComboBox(widget);
        startMatter->setObjectName(QString::fromUtf8("startMatter"));

        gridLayout->addWidget(startMatter, 0, 4, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 3);

        startGenre = new QComboBox(widget);
        startGenre->setObjectName(QString::fromUtf8("startGenre"));

        gridLayout->addWidget(startGenre, 1, 3, 1, 3);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 3);

        startAuthor = new QLineEdit(widget);
        startAuthor->setObjectName(QString::fromUtf8("startAuthor"));

        gridLayout->addWidget(startAuthor, 2, 3, 1, 3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 2);

        startTranslate = new QLineEdit(widget);
        startTranslate->setObjectName(QString::fromUtf8("startTranslate"));

        gridLayout->addWidget(startTranslate, 5, 2, 1, 4);

        label7 = new QLabel(widget);
        label7->setObjectName(QString::fromUtf8("label7"));

        gridLayout->addWidget(label7, 6, 0, 1, 5);

        startTime = new QLineEdit(widget);
        startTime->setObjectName(QString::fromUtf8("startTime"));

        gridLayout->addWidget(startTime, 6, 5, 1, 1);

        startPrice = new QLineEdit(widget);
        startPrice->setObjectName(QString::fromUtf8("startPrice"));

        gridLayout->addWidget(startPrice, 4, 2, 1, 4);

        startName = new QLineEdit(widget);
        startName->setObjectName(QString::fromUtf8("startName"));

        gridLayout->addWidget(startName, 3, 2, 1, 4);


        retranslateUi(correctWindow);

        QMetaObject::connectSlotsByName(correctWindow);
    } // setupUi

    void retranslateUi(QWidget *correctWindow)
    {
        correctWindow->setWindowTitle(QCoreApplication::translate("correctWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("correctWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("correctWindow", "\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("correctWindow", "\320\266\320\260\320\275\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("correctWindow", "\320\260\320\262\321\202\320\276\321\200", nullptr));
        label_4->setText(QCoreApplication::translate("correctWindow", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("correctWindow", "\321\206\320\265\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("correctWindow", "\320\277\320\265\321\200\320\265\320\262\320\276\320\264", nullptr));
        label7->setText(QCoreApplication::translate("correctWindow", "\320\262\321\200\320\265\320\274\321\217 \321\207\321\202\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class correctWindow: public Ui_correctWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORRECTWINDOW_H
