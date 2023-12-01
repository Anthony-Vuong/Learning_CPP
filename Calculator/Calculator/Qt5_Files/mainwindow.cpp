#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>

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
    QTextEdit *t = new QTextEdit();
    t->setMaximumSize(395, 150);
    QHBoxLayout *screen_layout = new QHBoxLayout();
    screen_layout->addWidget(t);

    // Push Buttons for digits
    QPushButton *QPushButton_0 = new QPushButton("0");
    QPushButton *QPushButton_1 = new QPushButton("1");
    QPushButton *QPushButton_2 = new QPushButton("2");
    QPushButton *QPushButton_3 = new QPushButton("3");
    QPushButton *QPushButton_4 = new QPushButton("4");
    QPushButton *QPushButton_5 = new QPushButton("5");
    QPushButton *QPushButton_6 = new QPushButton("6");
    QPushButton *QPushButton_7 = new QPushButton("7");
    QPushButton *QPushButton_8 = new QPushButton("8");
    QPushButton *QPushButton_9 = new QPushButton("9");

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


    // Push Buttons for Operators
    QPushButton *QPushButton_Add = new QPushButton("+");
    QPushButton *QPushButton_Subtract = new QPushButton("-");
    QPushButton *QPushButton_Multiply = new QPushButton("*");
    QPushButton *QPushButton_Divide = new QPushButton("/");
    QPushButton *QPushButton_Equate = new QPushButton("=");

    QGridLayout *operators_layout = new QGridLayout();

    operators_layout->addWidget(QPushButton_Add, 0, 1);
    operators_layout->addWidget(QPushButton_Subtract, 2, 1);
    operators_layout->addWidget(QPushButton_Multiply, 1, 0);
    operators_layout->addWidget(QPushButton_Divide, 1, 2);
    operators_layout->addWidget(QPushButton_Equate, 1, 1);


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

