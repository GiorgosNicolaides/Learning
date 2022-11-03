#include <iostream>
using namespace std;

class Base{

    private:
        int a;
        int b;
    public:
        static int c;

    Base(){
        a=10;
        b=10;
        c++;
        
    }
};
int Base :: c=0;
int main(int argc, char const *argv[])
{
    Base t1;
    Base t2;
    cout<<t1.c<<endl<<t2.c<<endl;

    return 0;
}
