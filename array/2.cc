#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int * fun(int n){

    int *p;
    // C++ way of declaring Array in to the heap memory.
    // C way of declaring Array in to the heap memory "(int *)malloc("size of array we want"*sizeof(int))"
    p=new int[n];

    for(int i=0; i<n; i++)
    p[i]=i+1;

    return p;
};

int main(){
    int *A;
    A=fun(5);

    for(int i=0; i<5; i++)
    cout<<A[i]<<endl;

    return 0;
}
