#include<iostream>
using namespace std;
class test
{
    int no;
    static int count ;
public:
    void setno(void);
    void dispno(void);
    void dispcount(void);
};


void test:: setno(void)
{
    no=++count;
}


void test:: dispno(void)
{
    cout<<"Object number "<<no<<endl;
}

void test:: dispcount(void)
{
    cout<<"Counter "<<count<<endl;
}

int test::count;


main()
{
    test t1,t2,t3;

    t1.setno();
    t2.setno();
    t3.setno();


    t1.dispcount();
    t2.dispcount();
    t3.dispcount();


    t1.dispno();
    t2.dispno();
    t3.dispno();

}
