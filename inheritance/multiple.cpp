#include<bits/stdc++.h>
class A{
    public:
    A()
    {
        std::cout<<"A called\n";
    }
};
class B
{
    public:
    B(){
        std::cout<<"B called\n";
    }
};
class C:A,B{
    public :
    C()
    {
        std::cout<<"C called\n";
    }
};
int main()
{
    C obj;
}