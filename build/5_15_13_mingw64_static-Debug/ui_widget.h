/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *searchLabel;
    QLineEdit *searchLine;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QPushButton *saveButton;
    QPushButton *addBook;
    QHBoxLayout *horizontalLayout;
    QPushButton *correctBook;
    QPushButton *deleteBook;
    QPushButton *Exit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *sortingMatter;
    QComboBox *sortingGenre;
    QComboBox *sortingAthor;
    QComboBox *sortingName;
    QComboBox *priceSort;
    QComboBox *comboBox;
    QComboBox *timeSort;
    QComboBox *comboBox_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1920, 1080);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchLabel = new QLabel(Widget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy);
        searchLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        searchLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(searchLabel);

        searchLine = new QLineEdit(Widget);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));

        horizontalLayout_2->addWidget(searchLine);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(Widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        saveButton = new QPushButton(Widget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);

        addBook = new QPushButton(Widget);
        addBook->setObjectName(QString::fromUtf8("addBook"));

        verticalLayout->addWidget(addBook);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        correctBook = new QPushButton(Widget);
        correctBook->setObjectName(QString::fromUtf8("correctBook"));

        horizontalLayout->addWidget(correctBook);

        deleteBook = new QPushButton(Widget);
        deleteBook->setObjectName(QString::fromUtf8("deleteBook"));

        horizontalLayout->addWidget(deleteBook);

        Exit = new QPushButton(Widget);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        horizontalLayout->addWidget(Exit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        sortingMatter = new QComboBox(Widget);
        sortingMatter->setObjectName(QString::fromUtf8("sortingMatter"));

        horizontalLayout_3->addWidget(sortingMatter);

        sortingGenre = new QComboBox(Widget);
        sortingGenre->setObjectName(QString::fromUtf8("sortingGenre"));

        horizontalLayout_3->addWidget(sortingGenre);

        sortingAthor = new QComboBox(Widget);
        sortingAthor->setObjectName(QString::fromUtf8("sortingAthor"));

        horizontalLayout_3->addWidget(sortingAthor);

        sortingName = new QComboBox(Widget);
        sortingName->setObjectName(QString::fromUtf8("sortingName"));

        horizontalLayout_3->addWidget(sortingName);

        priceSort = new QComboBox(Widget);
        priceSort->setObjectName(QString::fromUtf8("priceSort"));

        horizontalLayout_3->addWidget(priceSort);

        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        timeSort = new QComboBox(Widget);
        timeSort->setObjectName(QString::fromUtf8("timeSort"));

        horizontalLayout_3->addWidget(timeSort);

        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 100);
        horizontalLayout_3->setStretch(2, 100);
        horizontalLayout_3->setStretch(3, 100);
        horizontalLayout_3->setStretch(4, 100);
        horizontalLayout_3->setStretch(5, 100);
        horizontalLayout_3->setStretch(6, 100);
        horizontalLayout_3->setStretch(7, 100);
        horizontalLayout_3->setStretch(8, 100);

        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 10);
        gridLayout->setColumnStretch(1, 50);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        searchLabel->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        saveButton->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        addBook->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        correctBook->setText(QCoreApplication::translate("Widget", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        deleteBook->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Exit->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\342\254\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\320\242\320\265\320\274\320\260\321\202\320\270\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "\320\226\320\260\320\275\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "\320\246\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264\321\207\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Widget", "\320\222\321\200\320\265\320\274\321\217 \321\207\321\202\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\267\321\213\320\262\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
