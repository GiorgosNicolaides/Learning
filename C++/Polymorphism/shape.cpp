 #include <iostream>
 class shape{

    private:
        virtual float area()=0;
        virtual float perimeter()=0;

        };

class Rectangle : public shape{
    private:
        float lenght;
        float breadth;

    public:
        Rectangle(int lenght=1, int breadth=1){
           lenght=this->lenght;
           breadth=this->breadth;
        }
        float perimeter(){
            return 2*(lenght+breadth);
        }
        float area(){
            return lenght*breadth;
        }
        void getData(){
            std :: cout<<"Give me the lenght:\n";
            std :: cin>>lenght;
            
            std :: cout<<"Give me the breadth:\n";
            std :: cin>>breadth;

        }
};

int main(int argc, char const *argv[])
{
    Rectangle *r =new Rectangle();
    r->getData();
    std :: cout<<"area="<<r->area()<<"\n";
    std :: cout<<"perimeter="<<r->perimeter()<<"\n";

    

    return 0;
}
