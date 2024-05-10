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
    QTableWidget *tableWidget;
    QComboBox *priceSort;
    QComboBox *timeSort;
    QComboBox *sortingMatter;
    QComboBox *sortingGenre;
    QComboBox *sortingAthor;
    QComboBox *sortingName;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *searchLabel;
    QLineEdit *searchLine;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *saveButton;
    QPushButton *addBook;
    QHBoxLayout *horizontalLayout;
    QPushButton *correctBook;
    QPushButton *deleteBook;
    QPushButton *Exit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1432, 636);
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
        tableWidget->setGeometry(QRect(404, 48, 991, 571));
        priceSort = new QComboBox(Widget);
        priceSort->setObjectName(QString::fromUtf8("priceSort"));
        priceSort->setGeometry(QRect(900, 20, 131, 28));
        timeSort = new QComboBox(Widget);
        timeSort->setObjectName(QString::fromUtf8("timeSort"));
        timeSort->setGeometry(QRect(1150, 20, 131, 28));
        sortingMatter = new QComboBox(Widget);
        sortingMatter->setObjectName(QString::fromUtf8("sortingMatter"));
        sortingMatter->setGeometry(QRect(400, 20, 131, 28));
        sortingGenre = new QComboBox(Widget);
        sortingGenre->setObjectName(QString::fromUtf8("sortingGenre"));
        sortingGenre->setGeometry(QRect(530, 20, 121, 28));
        sortingAthor = new QComboBox(Widget);
        sortingAthor->setObjectName(QString::fromUtf8("sortingAthor"));
        sortingAthor->setGeometry(QRect(650, 20, 131, 28));
        sortingName = new QComboBox(Widget);
        sortingName->setObjectName(QString::fromUtf8("sortingName"));
        sortingName->setGeometry(QRect(780, 20, 121, 28));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 401, 601));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchLabel = new QLabel(widget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy);
        searchLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        searchLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(searchLabel);

        searchLine = new QLineEdit(widget);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));

        horizontalLayout_2->addWidget(searchLine);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        saveButton = new QPushButton(widget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);

        addBook = new QPushButton(widget);
        addBook->setObjectName(QString::fromUtf8("addBook"));

        verticalLayout->addWidget(addBook);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        correctBook = new QPushButton(widget);
        correctBook->setObjectName(QString::fromUtf8("correctBook"));

        horizontalLayout->addWidget(correctBook);

        deleteBook = new QPushButton(widget);
        deleteBook->setObjectName(QString::fromUtf8("deleteBook"));

        horizontalLayout->addWidget(deleteBook);

        Exit = new QPushButton(widget);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        horizontalLayout->addWidget(Exit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
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
        searchLabel->setText(QCoreApplication::translate("Widget", "                                                           \320\237\320\276\320\270\321\201\320\272", nullptr));
        saveButton->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        addBook->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        correctBook->setText(QCoreApplication::translate("Widget", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        deleteBook->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Exit->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
