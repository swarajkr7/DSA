#include <stdio.h>
#include <iostream>
using namespace std;

void print(int n){
    
    if(n>0){
        printf("%d",n);
        print(n-1);
    }
}

int main(){

    int x=3;
    print(x);

    return 0;
}