#include<bits/stdc++.h>
class test
{
    public:
    static int count;
    int inc()
    {
        ++count;
    }
    static int print()
    {
        std::cout<<count;
    }
};
int test::count=0;
int main()
{
    test obj;
    obj.inc();
    obj.inc();
    test::print();
}