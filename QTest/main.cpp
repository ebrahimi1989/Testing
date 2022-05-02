#include <QCoreApplication>
#include "UserBuilder.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    UserBuilder usrBuild = *new UserBuilder(7);
    usrBuild.setAddress("us");
    usrBuild.setAge(25);

    UserBuilder usrBuild_2 =*new UserBuilder(15);
    usrBuild_2.setTell(368885);
    usrBuild_2.setPostalCode("10254858");

    return a.exec();
}
