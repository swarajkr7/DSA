#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    char X[5];
    char A[5] = {'A', 'V', 'D', 'F', 'G'};
    char S[] = {'q', 'e', 'r', 't', 'y'};
    char W[7] = {'s', 'w', 'a', 'r', 'a', 'j', '\0'};
    printf("%s\n", W);
    char v[7] = " kumar";
    printf("%s\n", v);

    char B[7];
    cout << "Enter a string (up to 6 characters): ";
    scanf("%6s", B); // Limit the input to avoid overflow
    printf("%s\n", B);

    char sen[50];
    printf("Enter a sentence: ");
    gets(sen); // Unsafe function, use with caution
    printf("%s\n", sen);

    return 0;
}
