#include<bits/stdc++.h>
class A{
    public:
    int print()
    {
        std::cout<<"The Class A function called\n";
    }
};
class B:public A{
    public:
    int print1()
    {
        std::cout<<"The Class B function called";
    }
};
int main()
{
    B obj;
    obj.print();
    obj.print1();
}