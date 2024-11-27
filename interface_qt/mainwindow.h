#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ordonnance.h"
#include <QStackedWidget>
#include <QSortFilterProxyModel>
#include <QMainWindow>
#include <QMap>
#include<QVariant>
#include<QtCore>
#include<QtGui>
#include<QtQuick>
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include <QFrame>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ordonnance Etmp;
    bool messageShown = false;
    void onValiderButtonClicked();
    QString originalNom, originalPrenom, originalStatu, originalMed;
        QDate originalDate_ord;
        int originalCin, originalTel,originalord;
    QSortFilterProxyModel *proxyModel;


private slots:
    void on_pushButton_8_clicked();
    void on_pushButton_10_clicked(); // For salary button*
    void on_pushButton_12_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_35_clicked();
    void on_pushButton_36_clicked();
    void on_pushButton_37_clicked();
    void on_pushButton_28_clicked();
    void on_pushButton_27_clicked();
    void on_pushButton_25_clicked();
    void on_pushButton_24_clicked();
    void on_addbutton1_clicked();
    void on_deletebutton1_clicked();
    void on_updateButton_clicked();
    void on_update2Button_clicked();
    void on_aa33_clicked();
    void on_aa44_clicked();
    void showStatistics();
    void on_aaa_2_clicked();
    void generatePDFBill(const ordonnance &ord);
    void on_pwhatsapp_clicked();

    void on_pwhatsapp_2_clicked();
    void sendRequest();
    void on_chatbot_clicked();

private:
    QStackedWidget *stackedWidget;

signals:
    void setCenterPosition(QVariant,QVariant);
    void setLocationMarking(QVariant,QVariant);


};

#endif // MAINWINDOW_H
