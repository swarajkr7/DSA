#include <iostream>
#include <stdio.h>
using namespace std;

// class include data members and the fucntions or the methods that we use to operate on those data members

class rectangle {
    private:
    int length;
    int breadth;

// Methods that have same name as class are call the constructor which is used to initialize the data members of class
    public:
    rectangle (int l,int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;

    }

    void changelength(int l){
        length=l;
    }
};

int main(){
    // The variable which are being created using the class are called Object
    rectangle r(10,20);
    r.changelength(20);
    int newArea=r.area();
    cout<<"Area of the rectangle:"<<newArea<<endl;

    return 0;

}