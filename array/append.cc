#include <iostream>
#include <stdio.h>
using namespace std;

struct ar {
    int A[20];
    int size;
    int length;
};

void Insert(struct ar *arr,int index, int num1){
    if(arr->length < arr->size) {
        for(int i=arr->length; i>=index; i--){
            arr->A[i+1]=arr->A[i];
        }
        arr->A[index]=num1;
        arr->length++;
 }
}
void Append(struct ar *arr, int num) {
    if(arr->length < arr->size) {
        arr->A[arr->length] = num;
        arr->length++;
 }
}

void Display(struct ar arr){
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}

int main() {
    struct ar arr = {{1, 2, 3, 4, 5}, 20, 5};

    printf("Enter the number that you want to append: ");
    int num;
    scanf("%d", &num);

    Append(&arr, num);

    printf("Enter the number that you want to insert:");
    int num1;
    scanf("%d", &num1);

    printf("Enter the index at which you want to enter the number:");
    int index;
    scanf("%d",&index);

    Insert(&arr,index,num1);
    
    Display(arr);

    return 0;
}
