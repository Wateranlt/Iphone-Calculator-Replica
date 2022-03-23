#include "Calculator.h"
#include "ui_Calculator.h"
#include <iostream>


Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    operations = 'o';
    result = 0;
    temp = 0;
    check = true;
    count = 0;
    decimals = false;
}

void Calculator::addNumber()
{
    //Determine which button called the slot
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    //If egual has been chosen, then we reinitialise the data
    if(operations == 0) // TODO Making an enum to caracterize operations
    {
        resultString = "0";
        result = 0;
        operations = 10;
        emit changedWord(resultString);
    }

    if(button->text() == ',')
    {
        decimals = true;
        resultString = (resultString == '0') ? "." : resultString + ".";
        emit changedWord(resultString);
        return;
    }
    if(decimals == true)
        count++;

    if(check)
    {
        result = (result < 0) ? result * 10 - button->text().toDouble() : result * 10 + button->text().toDouble();
        resultString = (resultString == '0') ? button->text() : resultString + button->text();
        emit changedWord(resultString);
    }
    else
    {
        temp = (temp < 0) ? temp * 10 - button->text().toDouble() : temp * 10 + button->text().toDouble();
        resultString = (resultString == '0') ? button->text() : resultString + button->text();
        emit changedWord(resultString);
    }
}

void Calculator::selectOperations()
{
    resultString = 0;
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    operations = button->accessibleDescription().toDouble();
    if(decimals)
    {
        std::cout << "decimals 1 = " << result << std::endl;
        result /= (10 * count);
    }
    if(operations == 5)
    {
        result /= 100;
        resultString = QString::number(result);
        emit changedWord(resultString);
        return;
    }
    if(operations == 6)
    {
        result = -result;
        resultString = QString::number(result);
        emit changedWord(resultString);
        return;
    }
    check = false;
    decimals = false;
    count = 0;
}

void Calculator::reset()
{
    resultString = '0';
    temp = 0;
    result = 0;
    operations = 0;
    decimals = false;
    count = 0;
    emit changedWord(resultString);
}

void Calculator::doOperations()
{
    check = true;
    if(decimals)
    {
        std::cout << "decimals 2 = " << result << " et " << temp << std::endl;
        temp /= (10 * count);
    }
    switch(operations)
    {
    case 1:
        result += temp;
        temp = 0;
        resultString = QString::number(result);
        break;
    case 2:
        result -= temp;
        temp = 0;
        resultString = QString::number(result);
        break;
    case 3:
        result *= temp;
        temp = 0;
        resultString = QString::number(result);
        break;
    case 4:
        result /= temp;
        temp = 0;
        resultString = QString::number(result);
        break;
    default:
        break;
    }
    decimals = false;
    count = 0;
    operations = 0;
    emit changedWord(resultString);
}


Calculator::~Calculator()
{
    delete ui;
}

