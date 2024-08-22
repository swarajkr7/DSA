#include <iostream>
#include <stdio.h>
using namespace std;

struct ar{
    int A[10];
    int size;
    int length;

};

void Delete (struct ar *arr,int in){

    for(int i=in; i<=arr->length; i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;

}

void Display(struct ar arr){
    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i];
}

int main(){
    struct ar arr={{1,2,3,4,5},10,5};

    int index;
    printf("Enter the index of the number that you want to delete:");
    scanf("%d",&index);

    Delete(&arr,index);
    Display(arr);
    return 0;

}