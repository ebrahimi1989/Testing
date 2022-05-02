
#include "User.h"
#pragma once
class UserBuilder
{
public:
    User *usr;
    UserBuilder(int id);

    const QString &getName() const;
    void setName(const QString &newName);

    const QString &getFamily() const;
    void setFamily(const QString &newFamily);

    int getTell() const;
    void setTell(int newTell);

    void setAge(int age);
    int getAge();

    QString getAddress();
    void setAddress(QString address);

    const QString &getPostalCode() const;
    void setPostalCode(const QString &newPostalCode);

};
