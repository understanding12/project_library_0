/********************************************************************************
** Form generated from reading UI file 'addbookwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKWINDOW_H
#define UI_ADDBOOKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddBookWindow
{
public:
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *SubjectMatterLabel;
    QComboBox *addMatter;
    QHBoxLayout *horizontalLayout_6;
    QLabel *GenreLabel;
    QComboBox *addGenre;
    QHBoxLayout *horizontalLayout_8;
    QLabel *AuthorLabel;
    QLineEdit *addAuthor;
    QHBoxLayout *horizontalLayout_7;
    QLabel *NameLabel;
    QLineEdit *addName;
    QHBoxLayout *horizontalLayout_9;
    QLabel *PriceLabel;
    QSpinBox *addPrice;
    QHBoxLayout *horizontalLayout_10;
    QLabel *TranslatorLabel;
    QLineEdit *addTranslator;
    QHBoxLayout *horizontalLayout_12;
    QLabel *TimeLabel;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *ReviewsButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *CanselButton;

    void setupUi(QDialog *AddBookWindow)
    {
        if (AddBookWindow->objectName().isEmpty())
            AddBookWindow->setObjectName(QString::fromUtf8("AddBookWindow"));
        AddBookWindow->resize(502, 311);
        verticalLayout_9 = new QVBoxLayout(AddBookWindow);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        SubjectMatterLabel = new QLabel(AddBookWindow);
        SubjectMatterLabel->setObjectName(QString::fromUtf8("SubjectMatterLabel"));

        horizontalLayout_5->addWidget(SubjectMatterLabel);

        addMatter = new QComboBox(AddBookWindow);
        addMatter->setObjectName(QString::fromUtf8("addMatter"));

        horizontalLayout_5->addWidget(addMatter);

        horizontalLayout_5->setStretch(0, 15);
        horizontalLayout_5->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        GenreLabel = new QLabel(AddBookWindow);
        GenreLabel->setObjectName(QString::fromUtf8("GenreLabel"));

        horizontalLayout_6->addWidget(GenreLabel);

        addGenre = new QComboBox(AddBookWindow);
        addGenre->setObjectName(QString::fromUtf8("addGenre"));

        horizontalLayout_6->addWidget(addGenre);

        horizontalLayout_6->setStretch(0, 15);
        horizontalLayout_6->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        AuthorLabel = new QLabel(AddBookWindow);
        AuthorLabel->setObjectName(QString::fromUtf8("AuthorLabel"));

        horizontalLayout_8->addWidget(AuthorLabel);

        addAuthor = new QLineEdit(AddBookWindow);
        addAuthor->setObjectName(QString::fromUtf8("addAuthor"));

        horizontalLayout_8->addWidget(addAuthor);

        horizontalLayout_8->setStretch(0, 15);
        horizontalLayout_8->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        NameLabel = new QLabel(AddBookWindow);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        horizontalLayout_7->addWidget(NameLabel);

        addName = new QLineEdit(AddBookWindow);
        addName->setObjectName(QString::fromUtf8("addName"));

        horizontalLayout_7->addWidget(addName);

        horizontalLayout_7->setStretch(0, 15);
        horizontalLayout_7->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        PriceLabel = new QLabel(AddBookWindow);
        PriceLabel->setObjectName(QString::fromUtf8("PriceLabel"));

        horizontalLayout_9->addWidget(PriceLabel);

        addPrice = new QSpinBox(AddBookWindow);
        addPrice->setObjectName(QString::fromUtf8("addPrice"));

        horizontalLayout_9->addWidget(addPrice);

        horizontalLayout_9->setStretch(0, 15);
        horizontalLayout_9->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        TranslatorLabel = new QLabel(AddBookWindow);
        TranslatorLabel->setObjectName(QString::fromUtf8("TranslatorLabel"));

        horizontalLayout_10->addWidget(TranslatorLabel);

        addTranslator = new QLineEdit(AddBookWindow);
        addTranslator->setObjectName(QString::fromUtf8("addTranslator"));

        horizontalLayout_10->addWidget(addTranslator);

        horizontalLayout_10->setStretch(0, 15);
        horizontalLayout_10->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        TimeLabel = new QLabel(AddBookWindow);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));

        horizontalLayout_12->addWidget(TimeLabel);

        timeEdit = new QTimeEdit(AddBookWindow);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        horizontalLayout_12->addWidget(timeEdit);

        horizontalLayout_12->setStretch(0, 15);
        horizontalLayout_12->setStretch(1, 70);

        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        ReviewsButton = new QPushButton(AddBookWindow);
        ReviewsButton->setObjectName(QString::fromUtf8("ReviewsButton"));

        horizontalLayout_11->addWidget(ReviewsButton);

        horizontalLayout_11->setStretch(0, 70);

        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(AddBookWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        CanselButton = new QPushButton(AddBookWindow);
        CanselButton->setObjectName(QString::fromUtf8("CanselButton"));

        horizontalLayout->addWidget(CanselButton);


        verticalLayout_9->addLayout(horizontalLayout);


        retranslateUi(AddBookWindow);

        QMetaObject::connectSlotsByName(AddBookWindow);
    } // setupUi

    void retranslateUi(QDialog *AddBookWindow)
    {
        AddBookWindow->setWindowTitle(QCoreApplication::translate("AddBookWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
        SubjectMatterLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\242\320\265\320\274\320\260\321\202\320\270\320\272\320\260", nullptr));
        GenreLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\226\320\260\320\275\321\200", nullptr));
        AuthorLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        NameLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        PriceLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\246\320\265\320\275\320\260", nullptr));
        TranslatorLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264\321\207\320\270\320\272", nullptr));
        TimeLabel->setText(QCoreApplication::translate("AddBookWindow", "\320\222\321\200\320\265\320\274\321\217 \321\207\321\202\320\265\320\275\320\270\321\217", nullptr));
        ReviewsButton->setText(QCoreApplication::translate("AddBookWindow", "\320\236\321\202\320\267\321\213\320\262\321\213", nullptr));
        addButton->setText(QCoreApplication::translate("AddBookWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        CanselButton->setText(QCoreApplication::translate("AddBookWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBookWindow: public Ui_AddBookWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKWINDOW_H
