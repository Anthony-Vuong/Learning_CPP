#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_ui();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_ui(){



    // Change window size to 400, 300
    setFixedSize(400, 300);
    // Rename the window to Calculator
    setWindowTitle("Calculator");

    // Create a mainlayout to hold all the sublayouts
    QVBoxLayout *mainlayout = new QVBoxLayout();

    // TextEdit window for - expressions
    screen = new QTextEdit();
    screen->setCursorWidth(10);
    screen->setMaximumSize(395, 250);
    QHBoxLayout *screen_layout = new QHBoxLayout();
    screen->setFontPointSize(16);
    screen_layout->addWidget(screen);

    // Push Buttons for digits
    QPushButton_0 = new QPushButton("0", this);
    QPushButton_1 = new QPushButton("1");
    QPushButton_2 = new QPushButton("2");
    QPushButton_3 = new QPushButton("3");
    QPushButton_4 = new QPushButton("4");
    QPushButton_5 = new QPushButton("5");
    QPushButton_6 = new QPushButton("6");
    QPushButton_7 = new QPushButton("7");
    QPushButton_8 = new QPushButton("8");
    QPushButton_9 = new QPushButton("9");

    // Layout Digit Buttons 2x5
    QGridLayout *digits_layout = new QGridLayout();
    // Add digit buttons to layout in grid format
    digits_layout->addWidget(QPushButton_0, 0, 0);
    digits_layout->addWidget(QPushButton_1, 0, 1);
    digits_layout->addWidget(QPushButton_2, 0, 2);
    digits_layout->addWidget(QPushButton_3, 0, 3);
    digits_layout->addWidget(QPushButton_4, 0, 4);
    digits_layout->addWidget(QPushButton_5, 1, 0);
    digits_layout->addWidget(QPushButton_6, 1, 1);
    digits_layout->addWidget(QPushButton_7, 1, 2);
    digits_layout->addWidget(QPushButton_8, 1, 3);
    digits_layout->addWidget(QPushButton_9, 1, 4);

    // Add QtSignal Button Presses for Digit Buttons
    //connect(QPushButton_0, &QPushButton::clicked, this, &MainWindow::QPushButton_0_Handle);

    connect(QPushButton_0, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_1, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_2, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_3, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_4, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_5, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_6, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_7, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_8, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);
    connect(QPushButton_9, &QPushButton::clicked, this, &MainWindow::handle_digit_buttons);


    // Push Buttons for Operators
    QPushButton_Add = new QPushButton("+");
    QPushButton_Subtract = new QPushButton("-");
    QPushButton_Multiply = new QPushButton("*");
    QPushButton_Divide = new QPushButton("/");
    QPushButton_Equate = new QPushButton("=");

    QGridLayout *operators_layout = new QGridLayout();

    operators_layout->addWidget(QPushButton_Add, 0, 1);
    operators_layout->addWidget(QPushButton_Subtract, 2, 1);
    operators_layout->addWidget(QPushButton_Multiply, 1, 0);
    operators_layout->addWidget(QPushButton_Divide, 1, 2);
    operators_layout->addWidget(QPushButton_Equate, 1, 1);

    connect(QPushButton_Add, &QPushButton::clicked, this, &MainWindow::QPushButton_Add_Handle);
    connect(QPushButton_Subtract, &QPushButton::clicked, this, &MainWindow::QPushButton_Subtract_Handle);
    connect(QPushButton_Multiply, &QPushButton::clicked, this, &MainWindow::QPushButton_Multiply_Handle);
    connect(QPushButton_Divide, &QPushButton::clicked, this, &MainWindow::QPushButton_Divide_Handle);
    connect(QPushButton_Equate, &QPushButton::clicked, this, &MainWindow::QPushButton_Equate_Handle);


    // Create a new main widget to hold layouts
    QWidget *qt_widget = new QWidget();
    // Add layouts to main layout
    mainlayout->addLayout(screen_layout);
    mainlayout->addLayout(digits_layout);
    mainlayout->addLayout(operators_layout);
    mainlayout->addStretch();

    qt_widget->setLayout(mainlayout);
    setCentralWidget(qt_widget);

}

void MainWindow::handle_digit_buttons(){

    QObject* button_id = sender();
    QString t{};

    screen->setFocus();
    screen->moveCursor(QTextCursor::Start);
    t = screen->toPlainText();
    if(button_id == QPushButton_0){
        t = t + '0';
    }
    else if(button_id == QPushButton_1){
        t = t + '1';
    }
    else if(button_id == QPushButton_2){
        t = t + '2';
    }
    else if(button_id == QPushButton_3){
        t = t + '3';
    }
    else if(button_id == QPushButton_4){
        t = t + '4';
    }
    else if(button_id == QPushButton_5){
        t = t + '5';
    }
    else if(button_id == QPushButton_6){
        t = t + '6';
    }
    else if(button_id == QPushButton_7){
        t = t + '7';
    }
    else if(button_id == QPushButton_8){
        t = t + '8';
    }
    else if(button_id == QPushButton_9){
        t = t + '9';
    }
    screen->setPlainText(t);
    for(int i{0}; i<50; i++)
        screen->moveCursor(QTextCursor::Right);


}

void MainWindow::format_screen(QStringList strList, QString result){

    QString t;

    if(strList.length() > 6){
        strList.removeAt(0);
        strList.removeAt(0);
        for(int i{0}; i<strList.length(); i++){
            if(i % 2 == 0){
                t = t + strList.at(i);
            }
            else{
                t = t + "\n" + strList.at(i) + "\n";
            }
            //t = t + strList.at(i) + "\n";
        }
    }
    else if(strList.length() == 1){
        t = t + strList.at(0); // + "\n     =" + result + "\n";
    }
    else{
        for(int i{0}; i<strList.length(); i++){
            if(i % 2 == 0){
                t = t + strList.at(i);
            }
            else{
                t = t + "\n" + strList.at(i) + "\n";
            }
        }
    }

    t = t + "\n     =" + result + "\n";

    screen->setPlainText(t);
}

void MainWindow::QPushButton_Equate_Handle(){
    QString result{};
    strList = screen->toPlainText().split("\n");

    //
    s.parse_expression(strList.last());

    //
    result = s.calculate();

    //
    format_screen(strList, result);

}


void MainWindow::QPushButton_Add_Handle(){
    QString t{};
    t = screen->toPlainText();
    t = t + '+';
    screen->setPlainText(t);
}

void MainWindow::QPushButton_Subtract_Handle(){
    QString t{};
    t = screen->toPlainText();
    t = t + '-';
    screen->setPlainText(t);
}

void MainWindow::QPushButton_Multiply_Handle(){
    QString t{};
    t = screen->toPlainText();
    t = t + '*';
    screen->setPlainText(t);
}

void MainWindow::QPushButton_Divide_Handle(){
    QString t{};
    t = screen->toPlainText();
    t = t + '/';
    screen->setPlainText(t);
}





