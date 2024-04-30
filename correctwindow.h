#ifndef CORRECTWINDOW_H
#define CORRECTWINDOW_H

#include <QWidget>

namespace Ui {
class correctWindow;
}

class correctWindow : public QWidget
{
    Q_OBJECT


public:
    explicit correctWindow(QWidget *parent = nullptr);
    int correctindex;
    ~correctWindow();

private slots:
    void on_startMatter_activated(int index);
public slots:
    void on_pushButton_clicked();
signals:
    void buttonClicked(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index);

public slots:
    void fillLine(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index);
private:
    Ui::correctWindow *ui;
};

#endif // CORRECTWINDOW_H
