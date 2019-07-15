#include<bits/stdc++.h>
class A{
    public:
    A()
    {
        try{
            throw 6;
        }
        catch(int a)//or const char* a
        {
            std::cout<<"Throwed value : "<<a;
        }
    }
};
int main()
{
    A obj;
}