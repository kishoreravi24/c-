#include<bits/stdc++.h>
int m=10;
class test{
    public:
    static int m;
    static int print(){
        std::cout<<"Scope: "<<::m<<"\n";
        std::cout<<"Local: "<<m<<"\n";
    }
};
int test::m=5;
int main()
{
    test::print();
}