#ifndef PASIEN_H
#define PASIEN_H
#include <klinikhewan.h>
#include <dokter.h>
#include <pasien.h>
#include <rekammedis.h>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class Pasien
{
public:
    Pasien();
    Pasien(int id_pasien, QString nama_hewan,QString jk_hewan,
           QString jenis_ras, QString umur_hewan, QString warna_hewan, QString panjang_hewan);

    void setid_pasien(int id_pasien);
    int getid_pasien();

    void setnama_hewan(QString nama_hewan);
    QString getnama_hewan();

    void setjk_hewan(QString jk_hewan);
    QString getjk_hewan();

    void setjenis_ras(QString jenis_ras);
    QString getjenis_ras();

    void setumur_hewan(QString umur_hewan);
    QString getumur_hewan();

    void setwarna_hewan(QString warna_hewan);
    QString getwarna_hewan();

    void setpanjang_hewan(QString panjang_hewan);
    QString getpanjang_hewan();

private:
    int id_dokter;
    QString nama hewan, jk_hewan, jenis_ras, umur_hewan, warna_hewan, panjang_hewan;
    QSqlDatabase connectDB;

};

#endif // PASIEN_H
