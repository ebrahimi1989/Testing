#include "UserBuilder.h"

UserBuilder::UserBuilder(int id)
{
    usr = new User(id);
}

const QString &UserBuilder::getName() const
{
    return usr->getName();
}

void UserBuilder::setName(const QString &newName)
{
    usr->setName(newName);
}

const QString &UserBuilder::getFamily() const
{
    return usr->getFamily();
}

void UserBuilder::setFamily(const QString &newFamily)
{
    usr->setFamily(newFamily);
}

int UserBuilder::getTell() const
{
    return usr->getTell();
}

void UserBuilder::setTell(int newTell)
{
    usr->setTell(newTell);
}

void UserBuilder::setAge(int age)
{
    usr->setAge(age);
}

int UserBuilder::getAge()
{
    return usr->getAge();
}

QString UserBuilder::getAddress()
{
    return usr->getAddress();
}

void UserBuilder::setAddress(QString address)
{
    usr->setAddress(address);
}

const QString &UserBuilder::getPostalCode() const
{
    return usr->getPostalCode();
}

void UserBuilder::setPostalCode(const QString &newPostalCode)
{
    usr->setPostalCode(newPostalCode);
}
