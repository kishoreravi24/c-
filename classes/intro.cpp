#include<bits/stdc++.h>
class A{
    public:
    int a=5;
    int print(int b)
    {
        return a*b;
    }
};
int main()
{
    A obj;
    std::cout<<obj.print(6);
}