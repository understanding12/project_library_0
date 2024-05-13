/********************************************************************************
** Form generated from reading UI file 'readbook.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READBOOK_H
#define UI_READBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_readBook
{
public:

    void setupUi(QWidget *readBook)
    {
        if (readBook->objectName().isEmpty())
            readBook->setObjectName(QString::fromUtf8("readBook"));
        readBook->resize(400, 300);

        retranslateUi(readBook);

        QMetaObject::connectSlotsByName(readBook);
    } // setupUi

    void retranslateUi(QWidget *readBook)
    {
        readBook->setWindowTitle(QCoreApplication::translate("readBook", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class readBook: public Ui_readBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READBOOK_H
