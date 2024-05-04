#include "firstt.h"
#include "second.h"
#include<iostream>
using namespace std;
firstt::firstt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(on_button_clicked())); // Connect button click to slot
}


firstt::~firstt()
{}
void firstt::on_button_clicked()
{
    cout << "Button clicked!";
    // Create an instance of the Second window
    second* secondWindow = new second();
    secondWindow->show(); // Show the Second window
    this->hide();

}