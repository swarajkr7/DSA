#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Reverse(Array *arr) {
    int *B;
    int j;
    B = (int *)malloc(arr->length * sizeof(int));
    if (B == NULL) {
        cout << "Memory allocation failed" << endl;
        return;
    }
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++) {
        B[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++) {
        arr->A[i] = B[i];
    }
    free(B);
}

void Reverse1(Array *arr) {
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void Display(Array arr) {
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void InsertSort(Array *arr, int n) {
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;

    while (i >= 0 && arr->A[i] > n) {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = n;
    arr->length++;
}

int isSorted(struct Array arr) {
    int i;
    for (i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

void Rearrange(Array *arr) {
    int i = 0;
    int j = arr->length - 1;

    while (i < j) {
        while (arr->A[i] < 0) i++;
        while (arr->A[j] >= 0) j--;
        if (i < j) swap(&arr->A[i], &arr->A[j]);
    }
}

Array* Merge(Array *arr1, Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = (Array *)malloc(sizeof(Array));
    if (arr3 == NULL) {
        cout << "Memory allocation failed" << endl;
        return NULL;
    }
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}

Array* Union(Array *arr1, Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = (Array *)malloc(sizeof(Array));
    if (arr3 == NULL) {
        cout << "Memory allocation failed" << endl;
        return NULL;
    }
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else if (arr2->A[j] < arr1->A[i]) {
            arr3->A[k++] = arr2->A[j++];
        } else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

Array* Intersection(Array *arr1, Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = (Array *)malloc(sizeof(Array));
    if (arr3 == NULL) {
        cout << "Memory allocation failed" << endl;
        return NULL;
    }
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            i++;
        } else if (arr2->A[j] < arr1->A[i]) {
            j++;
        } else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

Array* Difference(Array *arr1, Array *arr2) {
    int i, j, k;
    i = j = k = 0;
    Array *arr3 = (Array *)malloc(sizeof(Array));
    if (arr3 == NULL) {
        cout << "Memory allocation failed" << endl;
        return NULL;
    }
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else if (arr2->A[j] < arr1->A[i]) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}


int main() {
    Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
    Array *arr3;

    arr3 = Difference(&arr1, &arr2);

    Display(*arr3);

    free(arr3);

    return 0;
}
