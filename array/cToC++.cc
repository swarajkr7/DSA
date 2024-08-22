#include <iostream>
using namespace std;

class Array {
private:
    int *A;
    int size;
    int length;

public:
    Array() {
        size = 10;
        length = 0;
        A = new int[size];
    }

    Array(int sz) {
        size = sz;
        length = 0;
        A = new int[size];
    }

    ~Array() {
        delete[] A;
    }

    void Set(int index, int x);
    int Get(int index);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Delete(int in);
    void Insert(int index, int num1);
    void Append(int num);
    int linearSearch(int n);
    void swap(int *a, int *b);
    void Reverse();
    void Reverse1();
    void Display();
    void InsertSort(int n);
    int isSorted();
    void Rearrange();
    Array* Merge(Array &arr2);
    Array* Union(Array &arr2);
    Array* Intersection(Array &arr2);
    Array* Difference(Array &arr2);
};

void Array::Set(int index, int x) {
    if (index >= 0 && index < length)
        A[index] = x;
}

int Array::Get(int index) {
    if (index >= 0 && index < length)
        return A[index];
    return -1;
}

int Array::Max() {
    int max = A[0];
    for (int i = 1; i < length; i++) {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

int Array::Min() {
    int min = A[0];
    for (int i = 1; i < length; i++) {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

int Array::Sum() {
    int s = 0;
    for (int i = 0; i < length; i++) {
        s += A[i];
    }
    return s;
}

float Array::Avg() {
    return (float)Sum() / length;
}

void Array::Delete(int in) {
    if (in >= 0 && in < length) {
        for (int i = in; i < length - 1; i++) {
            A[i] = A[i + 1];
        }
        length--;
    }
}

void Array::Insert(int index, int num1) {
    if (index >= 0 && index <= length && length < size) {
        for (int i = length; i > index; i--) {
            A[i] = A[i - 1];
        }
        A[index] = num1;
        length++;
    }
}

void Array::Append(int num) {
    if (length < size) {
        A[length] = num;
        length++;
    }
}

int Array::linearSearch(int n) {
    for (int i = 0; i < length; i++) {
        if (A[i] == n) {
            if (i > 0)
                swap(&A[i], &A[i - 1]);
            return i;
        }
    }
    return -1;
}

void Array::swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Array::Reverse() {
    int *B = new int[length];
    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        B[j] = A[i];
    }
    for (int i = 0; i < length; i++) {
        A[i] = B[i];
    }
    delete[] B;
}

void Array::Reverse1() {
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        swap(&A[i], &A[j]);
    }
}

void Array::Display() {
    for (int i = 0; i < length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::InsertSort(int n) {
    if (length == size) return;

    int i = length - 1;
    while (i >= 0 && A[i] > n) {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = n;
    length++;
}

int Array::isSorted() {
    for (int i = 0; i < length - 1; i++) {
        if (A[i] > A[i + 1])
            return 0;
    }
    return 1;
}

void Array::Rearrange() {
    int i = 0, j = length - 1;
    while (i < j) {
        while (A[i] < 0) i++;
        while (A[j] >= 0) j--;
        if (i < j) swap(&A[i], &A[j]);
    }
}

Array* Array::Merge(Array &arr2) {
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length) {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else
            arr3->A[k++] = arr2.A[j++];
    }
    for (; i < length; i++)
        arr3->A[k++] = A[i];
    for (; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];

    arr3->length = length + arr2.length;
    arr3->size = 10;

    return arr3;
}

Array* Array::Union(Array &arr2) {
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length) {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else if (arr2.A[j] < A[i])
            arr3->A[k++] = arr2.A[j++];
        else {
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    for (; i < length; i++)
        arr3->A[k++] = A[i];
    for (; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

Array* Array::Intersection(Array &arr2) {
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length);

    while (i < length && j < arr2.length) {
        if (A[i] < arr2.A[j])
            i++;
        else if (arr2.A[j] < A[i])
            j++;
        else {
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

Array* Array::Difference(Array &arr2) {
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length);

    while (i < length && j < arr2.length) {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else if (arr2.A[j] < A[i])
            j++;
        else {
            i++;
            j++;
        }
    }
    for (; i < length; i++)
        arr3->A[k++] = A[i];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main() {
    Array arr1(10);
    int ch;
    int x, index;

    do {
        cout << "Menu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Sum\n";
        cout << "5. Max\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter an element and index: ";
                cin >> x >> index;
                arr1.Insert(index, x);
                break;
            case 2:
                cout << "Enter index: ";
                cin >> index;
                arr1.Delete(index);
                break;
            case 3:
                arr1.Display();
                break;
            case 4:
                cout << "Sum: " << arr1.Sum() << endl;
                break;
            case 5:
                cout << "Max: " << arr1.Max() << endl;
                break;
        }
    } while (ch < 6);

    return 0;
}
