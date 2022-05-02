
#pragma once
#include <QObject>
#include "UserBuilder.h"
#include <QtTest>

class TestUser : public QObject
{
    Q_OBJECT;
public:
    TestUser();
private slots:
    void init();
    void testAddName();
    void testGetName();
    void testAddFamily();
    void testGetFamily();
};

