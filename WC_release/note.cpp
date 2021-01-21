#include "note.h"
#include "ui_note.h"

Note::Note(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Note)
{
    ui->setupUi(this);
    ui->label->setText("Записи успешно сохранены в базе данных");
}

Note::~Note()
{
    delete ui;
}

void Note::on_pushButton_clicked()
{
    this->hide();
}
