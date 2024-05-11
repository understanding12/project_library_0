/********************************************************************************
** Form generated from reading UI file 'analitics.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALITICS_H
#define UI_ANALITICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_analitics
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *analitics)
    {
        if (analitics->objectName().isEmpty())
            analitics->setObjectName(QString::fromUtf8("analitics"));
        analitics->resize(400, 300);
        graphicsView = new QGraphicsView(analitics);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(60, 50, 256, 192));

        retranslateUi(analitics);

        QMetaObject::connectSlotsByName(analitics);
    } // setupUi

    void retranslateUi(QWidget *analitics)
    {
        analitics->setWindowTitle(QCoreApplication::translate("analitics", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class analitics: public Ui_analitics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALITICS_H
