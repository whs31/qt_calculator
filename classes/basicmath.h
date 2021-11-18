#ifndef BASICMATH_H
#define BASICMATH_H

#include <QObject>
#include <QDebug>
#include <QJSEngine>
#include <QtMath>


class BasicMath : public QObject
{
    Q_OBJECT
public:
    explicit BasicMath(QObject *parent = nullptr);
    double showResult(QString inputField);

signals:

private:

};

#endif // BASICMATH_H
