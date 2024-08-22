#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    struct Rectangle{
        int length;
        int breadth;
    };

    Rectangle r={10,5};

    r.length=20;
    r.breadth=10;

    Rectangle *p;
    p=&r;

    (*p).length=30; //"*" is used to find the value stored at the address and the brackest are used to operate is first
    (*p).breadth=20;

    p->length=20; // shortcut way to find the value stored at the particular address(Only for strcut)
    p->breadth=10;

    printf("Area of the rectangle is %d",(*p).length*(*p).breadth);

    return 0;
}