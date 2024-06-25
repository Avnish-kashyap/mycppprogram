#include<iostream>
using namespace std;

class Rectangle{
public:
    int length, breadth;

    Rectangle(){        //defau;t constructor - no args
        length = 5;
        breadth = 4;
    }

    Rectangle(int x, int y){        //paarmeterised constructor - args passed
        length = x;
        breadth = y;
    }

    Rectangle(Rectangle& r){        //copy constructor - initialize obj by an existing obj
        length = r.length;
        breadth = r.breadth;
    }
};

int main(){
    Rectangle r1;
    cout<<r1.length<<" "<<r1.breadth<<endl;

    Rectangle r2(5,4);
    cout<<r2.length<<" "<<r2.breadth<<endl;

    Rectangle r3 = r2;
    cout<<r3.length<<" "<<r3.breadth<<endl;

    return 0;
}
