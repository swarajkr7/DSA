// As we know that we cant pass the array as valur to functin as parameter but through strcu we can bcz strcyt can be passed as 
// a parameter through value.
#include <iostream>
#include <stdio.h>
using namespace std;

struct naya{
    int A[5];
    int n;
};

void fun(struct naya n1){
    for(int i=0; i<n1.n; i++)
    cout<<n1.A[i]<<endl;
}

int main(){
    naya n={{2,3,4,5,6},5};
    fun(n);
    
    return 0;
}