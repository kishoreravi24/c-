#include<bits/stdc++.h>
class test
{
    public:
    int x,y,z;
    test()
    {
        std::cout<<"Constructor called\n";
    }
    test(int a)
    {
        this->x=a;
    }
    test(int b)
    {
        this->y=b;
    }
    friend sum(test,test);
};
int sum(test a1,test a2)
{
    std::cout<<a1.x<<" "<<a2.y;
}
int main()
{
    test a;
    test a1(5);
    test a2(6);
    int c=sum(a1,a2);
}