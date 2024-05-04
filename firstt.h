#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_firstt.h"

class firstt : public QMainWindow
{
    Q_OBJECT

public:
    firstt(QWidget *parent = nullptr);
    ~firstt();
private slots:
    void on_button_clicked();

private:
    Ui::firsttClass ui;
};
