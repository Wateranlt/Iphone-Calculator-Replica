#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

public slots:
    void addNumber();
    void doOperations();
    void selectOperations();
    void reset();
signals:
    void changedWord(QString string);
private:
    Ui::Calculator *ui;
    double result;
    double temp;
    QString resultString;
    int operations;
    bool check;
    int count;
    bool decimals;
};

/*
enum Operations {
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    COMA,
    NONE,
};
*/
#endif // CALCULATOR_H
