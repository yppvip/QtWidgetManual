#include "MainWidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    m_hBoxLayout = new QHBoxLayout(this);
    m_managerTabWidgt = new QTabWidget;
    m_hBoxLayout->addWidget(m_managerTabWidgt);

    loadMVCTabWidget();
}

MainWidget::~MainWidget()
{
}

void MainWidget::loadMVCTabWidget()
{
    MVCTabWidget* mvcTabWidget = new MVCTabWidget;

    m_managerTabWidgt->addTab(mvcTabWidget,QString("视图类"));
}

