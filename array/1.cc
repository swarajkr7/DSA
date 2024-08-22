// Array is passed as parameter using pointer in to the function
#include <iostream>
#include <stdio.h>
using namespace std;

// A[] itself acts as a pointer so we dont have to use the "*" to make pointer first
void fun(int A[], int n){

    for(int i=0; i<n; i++){
        cout<<A[i]<<endl;
    }
};

int main(){
    int A[5]={2,3,4,5,6};
// As we know that the name of the array itself points to the starting addressof the array
// so we dont have to use "&A" to pass the address
    fun(A,5);

    return 0;

}