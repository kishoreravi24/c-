#include<bits/stdc++.h>
class A{
    public:
    A(){
        std::cout<<"A called\n";
    }
};
class B:  A{
    public:
    B(){
        std::cout<<"B called\n";
    }
};
class C: B{
    public:
    C(){
        std::cout<<"C called\n";
    }
};
int main()
{
    C obj;
}