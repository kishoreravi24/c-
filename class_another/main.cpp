#include<bits/stdc++.h>
class test{
    public:
    int a;
    int getData(int);
    int print();
};
int test::getData(int a)
{
    this->a=a;
}
int test::print()
{
    return a*5;
}
int main()
{
    test obj;
    obj.getData(5);
    std::cout<<obj.print();
}
