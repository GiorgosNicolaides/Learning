#include <iostream>
using namespace std;

class Base{
    public:
    void fun1(){
        cout<<"Hel";
    };
    void fun2(){
        cout<<"lo" << endl;
    };
};

class Derived : public Base {
    public:
    void fun3(){
        cout<<"Hello World"<<endl;
    };

};

int main(int argc, char const *argv[])
{
    //Making a base object pointer and assigning it to a Derived object
    Base *p;
    p = new Derived();

    // With the pointer we can call the functions of the base class 
    p->fun1();
    p->fun2();

    // We cannot call the subclass's functions with a superclass object
    // p->fun3(); X

    Derived *ptr ;
    ptr = new Derived();

    // Cannot assign subclass pointer to superclass values 
    // ptr = new Base();

    // A subclass pointer can also call superclass functions
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();




    return 0;
}
