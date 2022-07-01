#include "mainwindow.h"
#include <QApplication>
#include "mylabel.h"
#include <QTableWidget>
#include <QWidget>
#include <QStringList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;
    widget.setWindowTitle("QTableWidget窗口");
    widget.resize(900,500);

    QTableWidget tableWidget(4,3,&widget);
    tableWidget.resize(900,350);
    tableWidget.setFont(QFont("宋体",20));
    tableWidget.setHorizontalHeaderLabels(QStringList() << "教程" << "网址" << "状态");

    tableWidget.setItem(0,0,new QTableWidgetItem("C语言教程"));
    tableWidget.setItem(0,1,new QTableWidgetItem("http://c.biancheng.net/c/"));
    tableWidget.setItem(0,2,new QTableWidgetItem("已更新完成"));
    tableWidget.setItem(1,0,new QTableWidgetItem("Qt教程"));
    tableWidget.setItem(1,1,new QTableWidgetItem("http://c.biancheng.net/qt/"));
    tableWidget.setItem(1,2,new QTableWidgetItem("正在更新"));
    tableWidget.setItem(2,0,new QTableWidgetItem("C++教程"));
    tableWidget.setItem(2,1,new QTableWidgetItem("http://c.biancheng.net/cplus/"));
    tableWidget.setItem(2,2,new QTableWidgetItem("以更新完毕"));

    myLabel label;
    label.setParent(&widget);
    label.setText("选中单元格");
    label.resize(900,150);
    label.move(0,350);
    label.setFont(QFont("宋体",20));
    label.setAlignment(Qt::AlignCenter);

    QObject::connect(&tableWidget,&QTableWidget::itemClicked,&label,&myLabel::rsetText);

    widget.show();

    return a.exec();
}
