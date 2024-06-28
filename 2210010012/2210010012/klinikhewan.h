#ifndef KLINIKHEWAN_H
#define KLINIKHEWAN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class KlinikHewan;
}
QT_END_NAMESPACE

class KlinikHewan : public QMainWindow
{
    Q_OBJECT

public:
    KlinikHewan(QWidget *parent = nullptr);
    ~KlinikHewan();

private:
    Ui::KlinikHewan *ui;
};
#endif // KLINIKHEWAN_H
