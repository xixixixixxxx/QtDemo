#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>
#include <QTableWidgetItem>

class myLabel:public QLabel{
    Q_OBJECT

public slots:
    void rsetText(QTableWidgetItem* item);
};

#endif // MYLABEL_H
