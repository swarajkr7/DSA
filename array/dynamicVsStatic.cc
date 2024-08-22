#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int A[5]={2,3,4,5,6};
    int *p;
    p=(int *)malloc(5*sizeof(int));

    p[0]=1;
    p[1]=2;
    p[2]=4;
    p[3]=6;
    p[4]=8;

    for(int i =0; i<5; i++){
        cout<<A[i];
    }
    cout<<"\n";
    for(int i=0; i<5; i++){
        cout<<p[i];
    }
    return 0;
}