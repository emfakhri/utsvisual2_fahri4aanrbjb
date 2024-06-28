#include "klinikhewan.h"
#include "ui_klinikhewan.h"

KlinikHewan::KlinikHewan(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KlinikHewan)
{
    ui->setupUi(this);
}

KlinikHewan::~KlinikHewan()
{
    delete ui;
}
