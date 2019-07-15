#include<bits/stdc++.h>
class A{
    public:
        A(){
            std::cout<<"Constructor called\n";
        }
        ~A()
        {
            std::cout<<"Destructor called";
        }
};
void function()
{
    A obj;
}
int main()
{
    function();
}