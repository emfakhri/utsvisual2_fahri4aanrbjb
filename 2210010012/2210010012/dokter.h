#ifndef DOKTER_H
#define DOKTER_H
#include <klinikhewan.h>
#include <dokter.h>
#include <pasien.h>
#include <rekammedis.h>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class Dokter : public Pasien : public RekamMedis
{
public:
    Dokter();
    Dokter(int id_dokter, QString nama_dokter,
           QString no_telepon, QString alamat, QString jabatan);

    void setid_dokter(int id_dokter);
    int getid_dokter();

    void setnama_dokter(QString nama_dokter);
    QString getnama_dokter();

    void setno_telepon(QString no_telepon);
    QString getno_telepon();

    void setalamat(QString alamat);
    QString getalamat();

    void setjabatan(QString jabatan);
    QString getjabatan();


private:
    QString nama_dokter, no_telepon, alamat, jabatan;
    int id_dokter;
    QSqlDatabase connectDB;

};

#endif // DOKTER_H
