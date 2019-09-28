/********************************************************************************
** Form generated from reading UI file 'fluxion.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLUXION_H
#define UI_FLUXION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fluxion
{
public:
    QAction *actionAre_you_a_noob;
    QAction *actionStart;
    QAction *actionStop;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QSlider *horizontalSlider_3;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *horizontalSlider_4;
    QWidget *tab_6;
    QComboBox *comboBox;
    QLabel *label_11;
    QTextBrowser *textBrowser_3;
    QLabel *label_12;
    QWidget *tab_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QLabel *label_13;
    QWidget *tab_7;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *radioButton_5;
    QLineEdit *lineEdit_3;
    QLabel *label_8;
    QWidget *tab_9;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QLabel *label_9;
    QLabel *label_10;
    QRadioButton *radioButton_25;
    QRadioButton *radioButton_26;
    QRadioButton *radioButton_27;
    QWidget *tab_19;
    QLabel *label_21;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_22;
    QLabel *label_23;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QTextBrowser *textBrowser_2;
    QWidget *tab_20;
    QWidget *tab_21;
    QWidget *tab_8;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_6;
    QWidget *tab_5;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser_9;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFluxion;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Fluxion)
    {
        if (Fluxion->objectName().isEmpty())
            Fluxion->setObjectName(QString::fromUtf8("Fluxion"));
        Fluxion->resize(1093, 360);
        actionAre_you_a_noob = new QAction(Fluxion);
        actionAre_you_a_noob->setObjectName(QString::fromUtf8("actionAre_you_a_noob"));
        actionStart = new QAction(Fluxion);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStop = new QAction(Fluxion);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        centralWidget = new QWidget(Fluxion);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 1061, 251));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 62, 20));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 40, 113, 28));
        horizontalSlider_3 = new QSlider(tab);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(10, 100, 160, 16));
        horizontalSlider_3->setMinimum(100);
        horizontalSlider_3->setMaximum(9999);
        horizontalSlider_3->setSingleStep(10);
        horizontalSlider_3->setPageStep(100);
        horizontalSlider_3->setValue(1000);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 80, 101, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 71, 20));
        horizontalSlider_4 = new QSlider(tab);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(10, 150, 160, 16));
        horizontalSlider_4->setMinimum(10);
        horizontalSlider_4->setMaximum(120);
        horizontalSlider_4->setSliderPosition(30);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        comboBox = new QComboBox(tab_6);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 50, 181, 28));
        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 30, 62, 20));
        textBrowser_3 = new QTextBrowser(tab_6);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(210, 50, 801, 141));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(210, 30, 62, 20));
        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        radioButton = new QRadioButton(tab_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 30, 105, 26));
        radioButton_2 = new QRadioButton(tab_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 141, 26));
        horizontalSlider = new QSlider(tab_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(90, 80, 91, 16));
        horizontalSlider->setMaximum(12);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(tab_4);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(90, 100, 91, 16));
        horizontalSlider_2->setMaximum(12);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 62, 20));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 62, 20));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(960, 180, 83, 28));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 1021, 151));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 180, 861, 28));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 180, 83, 28));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(390, 90, 151, 20));
        label_13->setTextFormat(Qt::PlainText);
        tabWidget->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        radioButton_3 = new QRadioButton(tab_7);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 90, 105, 26));
        radioButton_4 = new QRadioButton(tab_7);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 110, 105, 26));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(960, 180, 83, 28));
        label_6 = new QLabel(tab_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 70, 62, 20));
        label_7 = new QLabel(tab_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 150, 62, 20));
        radioButton_5 = new QRadioButton(tab_7);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 170, 105, 26));
        lineEdit_3 = new QLineEdit(tab_7);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 30, 231, 28));
        label_8 = new QLabel(tab_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 62, 20));
        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        radioButton_6 = new QRadioButton(tab_9);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 40, 105, 26));
        radioButton_7 = new QRadioButton(tab_9);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 60, 105, 26));
        radioButton_8 = new QRadioButton(tab_9);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(10, 80, 105, 26));
        radioButton_9 = new QRadioButton(tab_9);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(360, 40, 105, 26));
        radioButton_10 = new QRadioButton(tab_9);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(360, 80, 105, 26));
        radioButton_11 = new QRadioButton(tab_9);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(360, 60, 105, 26));
        radioButton_12 = new QRadioButton(tab_9);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(10, 100, 105, 26));
        label_9 = new QLabel(tab_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 20, 62, 20));
        label_10 = new QLabel(tab_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(370, 20, 62, 20));
        radioButton_25 = new QRadioButton(tab_9);
        radioButton_25->setObjectName(QString::fromUtf8("radioButton_25"));
        radioButton_25->setGeometry(QRect(10, 120, 105, 26));
        radioButton_26 = new QRadioButton(tab_9);
        radioButton_26->setObjectName(QString::fromUtf8("radioButton_26"));
        radioButton_26->setGeometry(QRect(10, 140, 105, 26));
        radioButton_27 = new QRadioButton(tab_9);
        radioButton_27->setObjectName(QString::fromUtf8("radioButton_27"));
        radioButton_27->setGeometry(QRect(10, 160, 105, 26));
        tabWidget->addTab(tab_9, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QString::fromUtf8("tab_19"));
        label_21 = new QLabel(tab_19);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 20, 62, 20));
        lineEdit_7 = new QLineEdit(tab_19);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(20, 40, 113, 28));
        lineEdit_8 = new QLineEdit(tab_19);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(160, 40, 113, 28));
        label_22 = new QLabel(tab_19);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(140, 40, 16, 20));
        label_23 = new QLabel(tab_19);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 90, 81, 20));
        checkBox = new QCheckBox(tab_19);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 120, 161, 26));
        checkBox_2 = new QCheckBox(tab_19);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 140, 89, 26));
        checkBox_3 = new QCheckBox(tab_19);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 160, 89, 26));
        checkBox_4 = new QCheckBox(tab_19);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(150, 120, 161, 26));
        checkBox_5 = new QCheckBox(tab_19);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(150, 140, 141, 26));
        checkBox_6 = new QCheckBox(tab_19);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(150, 160, 89, 26));
        pushButton_12 = new QPushButton(tab_19);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(960, 180, 83, 28));
        pushButton_13 = new QPushButton(tab_19);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(960, 10, 83, 28));
        textBrowser_2 = new QTextBrowser(tab_19);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(350, 10, 591, 201));
        tabWidget->addTab(tab_19, QString());
        tab_20 = new QWidget();
        tab_20->setObjectName(QString::fromUtf8("tab_20"));
        tabWidget->addTab(tab_20, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QString::fromUtf8("tab_21"));
        tabWidget->addTab(tab_21, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        textBrowser_4 = new QTextBrowser(tab_8);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(10, 20, 1031, 141));
        pushButton_6 = new QPushButton(tab_8);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(960, 170, 83, 28));
        tabWidget->addTab(tab_8, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(950, 170, 83, 28));
        textBrowser_9 = new QTextBrowser(tab_5);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(10, 20, 1021, 141));
        tabWidget->addTab(tab_5, QString());
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 260, 941, 23));
        progressBar->setValue(0);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(980, 260, 83, 28));
        Fluxion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Fluxion);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1093, 25));
        menuFluxion = new QMenu(menuBar);
        menuFluxion->setObjectName(QString::fromUtf8("menuFluxion"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Fluxion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Fluxion);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Fluxion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Fluxion);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Fluxion->setStatusBar(statusBar);

        menuBar->addAction(menuFluxion->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFluxion->addAction(actionStart);
        menuFluxion->addAction(actionStop);
        menuHelp->addAction(actionAre_you_a_noob);

        retranslateUi(Fluxion);

        tabWidget->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(Fluxion);
    } // setupUi

    void retranslateUi(QMainWindow *Fluxion)
    {
        Fluxion->setWindowTitle(QApplication::translate("Fluxion", "Fluxion", 0, QApplication::UnicodeUTF8));
        actionAre_you_a_noob->setText(QApplication::translate("Fluxion", "Are you a noob?", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("Fluxion", "Start", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("Fluxion", "Stop", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Fluxion", "TMP Path", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Fluxion", "Deauth time", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Fluxion", "Scan time", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Fluxion", "Config", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Fluxion", "Interface", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Fluxion", "Output", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Fluxion", "Interface", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Fluxion", "All Channel", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Fluxion", "Custom Channel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Fluxion", "Min", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Fluxion", "Max", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Fluxion", "Scan", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Fluxion", "Scan", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Fluxion", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Fluxion", "Target", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Fluxion", "Drag and Drop", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Fluxion", "Handshake check", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Fluxion", "Deauth all", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Fluxion", "Deauth client", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Fluxion", "Run", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Fluxion", "Mdk3", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Fluxion", "Aireplay", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("Fluxion", "Custom", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Fluxion", "Target", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Fluxion", "Deauth", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("Fluxion", "English", 0, QApplication::UnicodeUTF8));
        radioButton_7->setText(QApplication::translate("Fluxion", "German", 0, QApplication::UnicodeUTF8));
        radioButton_8->setText(QApplication::translate("Fluxion", "Russian", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("Fluxion", "Netgear", 0, QApplication::UnicodeUTF8));
        radioButton_10->setText(QApplication::translate("Fluxion", "Vodafone", 0, QApplication::UnicodeUTF8));
        radioButton_11->setText(QApplication::translate("Fluxion", "Arris", 0, QApplication::UnicodeUTF8));
        radioButton_12->setText(QApplication::translate("Fluxion", "Italian", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Fluxion", "Neutra", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Fluxion", "Custom", 0, QApplication::UnicodeUTF8));
        radioButton_25->setText(QApplication::translate("Fluxion", "Spanish", 0, QApplication::UnicodeUTF8));
        radioButton_26->setText(QApplication::translate("Fluxion", "Portuguese", 0, QApplication::UnicodeUTF8));
        radioButton_27->setText(QApplication::translate("Fluxion", "Chinese", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("Fluxion", "Webinterface", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Fluxion", "IP Range", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Fluxion", "--", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Fluxion", "Arguments", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Fluxion", "OS detection", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("Fluxion", "List scan", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("Fluxion", "Ping scan", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("Fluxion", "Skip host discovery", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("Fluxion", "IP protokoll scan", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("Fluxion", "Fast scan", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("Fluxion", "Start", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("Fluxion", "Stop", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_19), QApplication::translate("Fluxion", "Nmap ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_20), QApplication::translate("Fluxion", "Screenshots", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_21), QApplication::translate("Fluxion", "Seite", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Fluxion", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Fluxion", "Warnings", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Fluxion", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Fluxion", "Errors", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Fluxion", "Start", 0, QApplication::UnicodeUTF8));
        menuFluxion->setTitle(QApplication::translate("Fluxion", "Fluxion", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("Fluxion", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Fluxion: public Ui_Fluxion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLUXION_H
