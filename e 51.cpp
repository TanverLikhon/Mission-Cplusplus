///copy constructor

#include<iostream>
using namespace std;
class test
{
    int code;
    float price;
public:
    test (int c, float  p);
    test (const test &t);
    void disp();

};

test::test (int c, float p)
{
    code=c;
    price=p;
}

test:: test(const test&t)
{
    code= t.code;
    price=t.price;
}
void test:: disp()
{
    cout<<"CODE :"<<code<<endl;
    cout<<"PRICE: "<<price<<endl;
}
main()
{
    test t1(101, 50.6);///here i just making a constructor(parameterized constructor)
    test t2(t1);///calling copy constructor

    test t3=t2;

    cout<<"t1 object: \n"<<endl;
    t1.disp();
cout<<endl;
    cout<<"t2 object: \n"<<endl;
       t2.disp();
       cout<<endl;
    cout<<"t3 object: \n"<<endl;
       t3.disp();
}
