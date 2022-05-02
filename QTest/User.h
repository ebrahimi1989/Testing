#ifndef USER_H
#define USER_H
#pragma once
#include <QString>

class User
{
public:
    User(int id);

    const QString &getName() const;
    void setName(const QString &newName);

    const QString &getFamily() const;
    void setFamily(const QString &newFamily);

    int getTell() const;
    void setTell(int newTell);

    const QString &getAddress() const;
    void setAddress(const QString &newAddress);

    const QString &getPostalCode() const;
    void setPostalCode(const QString &newPostalCode);

    int getAge() const;
    void setAge(int newAge);

private:
    QString mName;
    QString mFamily;
    int mId;
    int mTel;
    QString mAddress;
    QString mPostalCode;
    int mAge;
};

#endif // USER_H
