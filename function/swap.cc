// Swapping the numbers using values
#include <iostream>
#include <stdio.h>
using namespace std;

int swap(int x, int y){

    int temp;
    temp=x;
    x=y;
    y=temp;

    return printf("A:%d and B:%d",x,y);
}

int main(){
    int a,b;
    a=10;
    b=20;

    swap(a,b);

    return 0;
}