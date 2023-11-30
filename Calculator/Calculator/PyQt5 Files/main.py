from PyQt5 import QtCore, QtGui, QtWidgets
#from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton, QTextEdit, QVBoxLayout, QWidget, QCalendarWidget, \
 #   QHBoxLayout, QLabel, QGridLayout
from PyQt5.QtCore import QSize, Qt

class MainWindow(QtWidgets.QMainWindow):

    def __init__(self):
        super().__init__()

        self.init_UI()


    # Initializie the user interface
    def init_UI(self):
        self.setWindowTitle("Calculator")
        self.setFixedSize(QSize(400, 300))
        mainlayout = QtWidgets.QVBoxLayout()

        self.screen = QtWidgets.QTextEdit()
        self.screen.setMaximumSize(395, 150)
        self.screenlayout = QtWidgets.QHBoxLayout()
        self.screenlayout.addWidget(self.screen)



        self.QPushButton_Add = QtWidgets.QPushButton("+")
        self.QPushButton_Subtract = QtWidgets.QPushButton("-")
        self.QPushButton_Multiply = QtWidgets.QPushButton("*")
        self.QPushButton_Divide = QtWidgets.QPushButton("/")
        self.QPushButton_Equate =QtWidgets. QPushButton("=")
        self.operator_layout = QtWidgets.QGridLayout()


        self.operator_layout.addWidget(self.QPushButton_Add, 0, 1)
        self.operator_layout.addWidget(self.QPushButton_Equate, 1, 1)
        self.operator_layout.addWidget(self.QPushButton_Multiply, 1, 0)
        self.operator_layout.addWidget(self.QPushButton_Divide, 1, 2)
        self.operator_layout.addWidget(self.QPushButton_Subtract, 2, 1)
        #self.operator_layout.addStretch()

        self.QPushButton_0 = QtWidgets.QPushButton("0")
        self.QPushButton_1 = QtWidgets.QPushButton("1")
        self.QPushButton_2 = QtWidgets.QPushButton("2")
        self.QPushButton_3 = QtWidgets.QPushButton("3")
        self.QPushButton_4 = QtWidgets.QPushButton("4")
        self.QPushButton_5 = QtWidgets.QPushButton("5")
        self.QPushButton_6 = QtWidgets.QPushButton("6")
        self.QPushButton_7 = QtWidgets.QPushButton("7")
        self.QPushButton_8 = QtWidgets.QPushButton("8")
        self.QPushButton_9 = QtWidgets.QPushButton("9")
        self.digit_layout = QtWidgets.QGridLayout()

        self.digit_layout.addWidget(self.QPushButton_0, 0, 0)
        self.digit_layout.addWidget(self.QPushButton_1, 0, 1)
        self.digit_layout.addWidget(self.QPushButton_2, 0, 2)
        self.digit_layout.addWidget(self.QPushButton_3, 0, 3)
        self.digit_layout.addWidget(self.QPushButton_4, 0, 4)
        self.digit_layout.addWidget(self.QPushButton_5, 1, 0)
        self.digit_layout.addWidget(self.QPushButton_6, 1, 1)
        self.digit_layout.addWidget(self.QPushButton_7, 1, 2)
        self.digit_layout.addWidget(self.QPushButton_8, 1, 3)
        self.digit_layout.addWidget(self.QPushButton_9, 1, 4)


        widget = QtWidgets.QWidget()
        mainlayout.addLayout(self.screenlayout)
        mainlayout.addLayout(self.digit_layout)
        mainlayout.addLayout(self.operator_layout)
        mainlayout.addStretch()


        widget.setLayout(mainlayout)
        self.setCentralWidget(widget)




if __name__ == '__main__':
    app = QtWidgets.QApplication([])

    window = MainWindow()

    window.show()

    app.exec()

