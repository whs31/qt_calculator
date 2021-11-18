#include "basicmath.h"

BasicMath::BasicMath(QObject *parent) : QObject(parent)
{
}

double BasicMath::showResult(QString inputField)
{
    qDebug()<<"Result button pressed.";
    double result = 0;
    qDebug()<<"String length: "<<inputField.length();

    inputField.replace("×", "*");
    inputField.replace("π", "3.14159265");
    inputField.replace("e", "2.71828182");
    inputField.replace("^", "**");
    inputField.replace("√", "Math.sqrt");

    QJSEngine JSEngine;
    QJSValue jsResult = JSEngine.evaluate(inputField);
    result = jsResult.toNumber();

    return result;
}
