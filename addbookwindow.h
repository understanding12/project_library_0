#ifndef ADDBOOKWINDOW_H
#define ADDBOOKWINDOW_H

#include <QDialog>
#include<QTreeWidgetItem>
#include <QComboBox>
#include "book.h"

namespace Ui {
class AddBookWindow;
}

class AddBookWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddBookWindow(QWidget *parent = nullptr);
    ~AddBookWindow();
    void setupMatters(QVector<QTreeWidgetItem*>, int);
    void setupGenres();
    book tbook;
    bool isAddButtonClicked = false;
private slots:
    void on_addButton_clicked();
    void on_CanselButton_clicked();

private:
    Ui::AddBookWindow *ui;
};

#endif // ADDBOOKWINDOW_H
