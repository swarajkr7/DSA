#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int *p,*q;

    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    q=new int[10];

    for(int i=0; i<5; i++)
        q[i]=p[i];

        q=p;
        p=NULL;

        delete [] p;

        for(int n=0; n<5; n++)
            cout<<q[n];

            return 0;
}