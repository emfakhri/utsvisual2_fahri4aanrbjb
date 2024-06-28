#include "dokter.h"

Dokter::Dokter() {
    connectDB = QSqlDatabase:: addDatabase("QODBC");
    connectDB.setDatabaseName("dsn_2210010012");
    connectDB.setUserName("root");
    connectDB.setPassword("");

    if (connectDB.open()) {
        qDebug()<<"Database Terkoneksi";
    } else {
        qDebug()<<connectDB.lastError().text();
    }

}

Dokter(int id_dokter, QString nama_dokter, QString no_telepon, QString alamat, QString jabatan)
{
    this->id_dokter = id_dokter;
    this->nama_dokter = nama_dokter;
    this->no_telepon = no_telepon;
    this->alamat = alamat;
    this->jabatan = jabatan;
}

void Dokter::setid_dokter(int id_dokter)
{

}

int Dokter::getid_dokter()
{

}

void Dokter::setnama_dokter(QString nama_dokter)
{

}

QString Dokter::getnama_dokter()
{

}

void Dokter::setno_telepon(QString no_telepon)
{

}

QString Dokter::getno_telepon()
{

}

void Dokter::setalamat(QString alamat)
{

}

QString Dokter::getalamat()
{

}

void Dokter::setjabatan(QString jabatan)
{

}

QString Dokter::getjabatan()
{

}
