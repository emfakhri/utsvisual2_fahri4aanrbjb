#include "klinikhewan.h"

#include <QApplication>
#include <klinikhewan.h>
#include <dokter.h>
#include <pasien.h>
#include <rekammedis.h>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KlinikHewan w;
    w.show();

    QSqlDatabase connectDB = QSqlDatabase :: addDatabase("QODBC");
    connectDB.setDatabaseName("dsn_2210010012");
    connectDB.setUserName("root");
    connectDB.setPassword("");

    if (connectDB.open()) {
            qDebug()<<"Database Terkoneksi";
            } else {
            qDebug()<<connectDB.lastError().text();
            }

    //qDebug () <<QSqlDatabase ::drivers();
    return a.exec();
}
