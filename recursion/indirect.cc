#include <iostream>
#include <stdio.h>
using namespace std;


void funB(int n);

void funA(int n){
    if(n>0){
        printf("%d ",n);
        funB(n-1);
    }
}

void funB(int n){
    if(n>0){
        printf("%d ",n);
        funA(n/2);
    }
}


int main(){
    int n;
    n=20;
    funA(n);

    return 0;

}