#ifndef NOTE_H
#define NOTE_H

#include <QObject>
#include <QWidget>

namespace Ui {
class Note;
}

class Note : public QWidget
{
    Q_OBJECT

public:
    explicit Note(QWidget *parent = nullptr);
    ~Note();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Note *ui;
};

#endif // NOTE_H
