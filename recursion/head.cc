//Head Recursion
#include <stdio.h>
#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d",n);
    }
}

int main(){

    int x=3;
    fun(x);

    return 0;
}