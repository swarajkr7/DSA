#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=10; p[1]=20; p[2]=30;  p[3]=40; p[4]=50;

    for(int i=0; i<5; i++)
    cout<<p[i]<<endl;

    delete [] p; //After using the heap memory we should delete it to be safe from memory conjestion 

    return 0;    
}