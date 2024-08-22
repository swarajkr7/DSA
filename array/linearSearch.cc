#include <stdio.h>
#include <iostream>
using namespace std;

struct ar{
    int A[10];
    int size;
    int length;
};

int linearSearch(struct ar *arr,int n){

    for(int i=0; i<arr->length; i++){
        if(arr->A[i]==n){
            swap(arr->A[i],arr->A[i-1]);
            return i;
        }
    }
    return -1;
    
}
int main(){
    struct ar arr={{1,2,3,4,5},10,5};

    printf("Enter the element you want to find in the array");
    int ele;
    scanf("%d",&ele);

    int index=linearSearch(&arr,ele);

    return 0;
}