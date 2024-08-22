#include <stdio.h>
#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

int Get(struct Array arr, int index) {
    if(index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int x) {
    if(index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr) {
    int max = arr.A[0];
    for(int i = 1; i < arr.length; i++) {
        if(arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr) {
    int min = arr.A[0];
    for(int i = 1; i < arr.length; i++) {
        if(arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr) {
    int s = 0;
    for(int i = 0; i < arr.length; i++) {
        s += arr.A[i];
    }
    return s;
}

float Avg(struct Array arr) {
    return (float)Sum(arr) / arr.length;
}

int main() {
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    printf("%d\n", Get(arr, 4));
    Set(&arr, 3, 0);
    printf("%d\n", Max(arr));
    printf("%d\n", Min(arr));  // Fixed the function call syntax
    printf("%d\n", Sum(arr));
    printf("%.2f\n", Avg(arr));  // Added precision to float output

    return 0;
}
