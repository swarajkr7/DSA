// struct is used to create our own data types
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    struct rectangle{
        int length;
        int breadth;
    };

    struct rectangle r={20,5};

    r.length=40;
    r.breadth=10;
    printf("Area of rectangle %d",r.length*r.breadth);

    return 0;

}


