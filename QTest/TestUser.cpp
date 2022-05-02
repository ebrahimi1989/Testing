#include "TestUser.h"

TestUser::TestUser()
{
    UserBuilder uBuilder(100);
    uBuilder.setName("Ali");
    uBuilder.setFamily("Amiri");
    uBuilder.setAge(30);
    uBuilder.setPostalCode("123456");
    uBuilder.setTell(98998866);
    uBuilder.setAddress("ir- code 25");
}

void TestUser::init()
{

}

void TestUser::testAddName()
{
    UserBuilder ub(15);
    ub.setName("hosein");
    QCOMPARE(ub.getName(), "hosein");
}

void TestUser::testGetName()
{
    UserBuilder ub(60);
    QVERIFY(ub.getName() == "ali"); // fail
}

void TestUser::testAddFamily()
{
    UserBuilder ub(20);
    ub.setFamily("darabi");
    QCOMPARE(ub.getFamily(), "hoseini"); // fail
}

void TestUser::testGetFamily()
{
    UserBuilder ub(50);
    ub.setFamily("mahmoodi");
    QVERIFY(ub.getFamily() == "mahmoodi");
}

QTEST_APPLESS_MAIN(TestUser)
