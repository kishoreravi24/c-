#include<bits/stdc++.h>
class A{
    public:
    int a;
        A()
        {
            std::cin>>a;
        }
        int print(A &obj)
        {
            obj.a++;
            a=obj.a;
        }
        int print1()
        {
            std::cout<<a;
        }
};
int main()
{
    A obj;
    obj.print1();
    obj.print(obj);
    obj.print1();
}