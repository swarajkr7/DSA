#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int A[5]={2,3,5,6,6};
    int *r;
    r=A;

    for(int i=0; i<5; i++)
    cout<<r[i]<<endl;

    return 0;
}





