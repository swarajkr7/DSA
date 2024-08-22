// In modular way of coding we define functions outside of the main function and perform oue all activities just by calling them 
// inside the main function.
#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

void initialise (struct rectangle *r,int l, int b){
    r->length=l;
    r->breadth=b;
}

int area (struct rectangle r){
    return r.length*r.breadth;
}

int perimeter (struct rectangle r){
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

int main(){

    int l,b;
    cout<<"Enter length and breadth of the rectangle:";
    cin>>l>>b;

    struct rectangle r;

    initialise(&r,l,b);

    int Area=area(r);
    cout<<"Area:"<<Area<<endl;


    int peri=perimeter(r);

    cout<<"Perimeter:"<<peri<<endl;

    return 0;
}