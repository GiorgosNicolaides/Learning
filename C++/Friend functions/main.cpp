
#include<iostream>
class test
{
    private:
        int a;
    protected:  
        int b;
    public:
        int c;

    friend void function();
};

 void function(){
    test t;
    t.a=10;
    t.b=20;
    t.c=30;
    std :: cout<<t.a<<t.b<<t.c;
}
int main(int argc, char const *argv[])
{
    function();
    return 0;
}
