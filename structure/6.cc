// passing struct as the parameter to the function using pointer.

#include <stdio.h>
#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int area (struct rectangle *r1){
    return r1->breadth*r1->length;
}

int main(){
    rectangle r={10,30};
    int a=area(&r);
    cout<<"The area of the rectangle is: "<<a<<endl;

    return 0;
}