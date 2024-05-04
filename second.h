#pragma once

#include <QMainWindow>
#include "ui_second.h"

class second : public QMainWindow
{
	Q_OBJECT

public:
	second(QWidget *parent = nullptr);
	~second();

private:
	Ui::secondClass ui;
};
