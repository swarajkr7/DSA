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

int binarySearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return binarySearch(a,l,mid-1,key);
        else
            return binarySearch(a,mid+1,h,key);      
    }

    return -1;
}
int main(){
    struct ar arr={{1,2,3,4,5},10,5};

    printf("%d\n",binarySearch(arr.A,0,arr.length,5));

    return 0;
}