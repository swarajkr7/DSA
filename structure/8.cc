// we are declaring a struct in the heap memory using a fucntion which is defined outside of the main function 
#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

struct rectangle *fun(){

    struct rectangle *p;
    p = new rectangle;

    p->breadth=10;
    p->length=20;

    return p;

}

int main(){

    struct rectangle *p;
    p=fun();

    cout<<"Breadth: "<<p->breadth<<endl<<"Length: "<<p->length<<endl;

    return 0;

}