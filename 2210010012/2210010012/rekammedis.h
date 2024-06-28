#ifndef REKAMMEDIS_H
#define REKAMMEDIS_H
#include <klinikhewan.h>
#include <dokter.h>
#include <pasien.h>
#include <rekammedis.h>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class RekamMedis
{
public:
    RekamMedis();
    RekamMedis(int id_rekam, int id_pasien, int id_dokter,
               QString tgl_periksa, QString keluhan, QString diagnosa, QString terapi);

    void setid_rekam(int id_rekam);
    int getid_rekam();

    void setid_pasien(int id_pasien);
    int getid_pasien();

    void setid_dokter( int id_dokter);
    int getid_dokter();

    void settgl_periksa (QString tgl_periksa);
    QString gettgl_periksa();

    void setkeluhan(QString keluhan);
    QString getkeluhan();

    void setdiagnosa(QString diagnosa);
    QString getdiagnosa();

    void setterapi(Qstring terapi);
    QString getterapi();

private:
    int id_rekam, id_pasien, id_dokter;
    QString tanggal, keluhan, diagnosa, terapi;
    QSqlDatabase connectDB;


};

#endif // REKAMMEDIS_H
