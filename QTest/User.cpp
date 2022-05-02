#include "User.h"

User::User(int id)
{
    mId = id;
}

const QString &User::getName() const
{
    return mName;
}

void User::setName(const QString &newName)
{
    mName = newName;
}

const QString &User::getFamily() const
{
    return mFamily;
}

void User::setFamily(const QString &newFamily)
{
    mFamily = newFamily;
}

int User::getTell() const
{
    return mTel;
}

void User::setTell(int newTell)
{
    mTel = newTell;
}

const QString &User::getAddress() const
{
    return mAddress;
}

void User::setAddress(const QString &newAddress)
{
    mAddress = newAddress;
}

const QString &User::getPostalCode() const
{
    return mPostalCode;
}

void User::setPostalCode(const QString &newPostalCode)
{
    mPostalCode = newPostalCode;
}

int User::getAge() const
{
    return mAge;
}

void User::setAge(int newAge)
{
    mAge = newAge;
}

