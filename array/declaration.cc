#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct ar
{
    int *A;
    int size;
    int length;
};

void Display(struct ar arr){

    int i;
    printf("\nElements are\n");
    for(i=0; i<arr.length; i++)
        printf("%d", arr.A[i]);
}

int main()
{
    struct ar arr;
    printf("Enter the size of the array:");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    int n=0;

    printf("Enter the number of elements of Array");
    scanf("%d",&n);

    printf("Enter all elements");
    for(int i=0; i<n; i++)
    scanf("%d",&arr.A[i]);

    arr.length=n;

    Display(arr);

    return 0;
}