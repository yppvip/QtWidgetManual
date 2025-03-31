#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QTabWidget>
#include <QHBoxLayout>
#include <QString>
#include "MVC/MVCTabWidget.h"
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
private:
    void loadMVCTabWidget();
private:
    QTabWidget* m_managerTabWidgt;  //总管理TabWidget
    QHBoxLayout* m_hBoxLayout;

};
#endif // MAINWIDGET_H
