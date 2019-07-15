#include<bits/stdc++.h>
class test
{
    public:
        int a;
        int print(test obj)
        {
            std::cout<<obj.a;
        }
};
int main()
{
    test obj;
    obj.a=5;
    obj.print(obj);
}