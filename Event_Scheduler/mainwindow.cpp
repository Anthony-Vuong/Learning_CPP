#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>

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

    setFixedSize(1000, 750);

    calendar = new QCalendarWidget();
    mainlayout = new QVBoxLayout();
    main_widget = new QWidget();
    top_layout = new QGridLayout();
    bottom_layout = new QHBoxLayout();
    edit_table = new QTableWidget();
    top_grid_layout = new QGridLayout();
    weeks = new QComboBox();

    calendar->setFixedSize(400, 400);

    edit_table->setRowCount(75);
    edit_table->setColumnCount(5);

    entry_widget = new QWidget();


    top_layout->addWidget(weeks, 0, 0);
    top_layout->addWidget(calendar, 0, 1);
    mainlayout->addLayout(top_layout);

    bottom_layout->addWidget(edit_table);
    mainlayout->addLayout(bottom_layout);



    // Add layouts to main layout

    main_widget->setLayout(mainlayout);
    setCentralWidget(main_widget);
}


