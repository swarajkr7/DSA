#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int a=10;
    int *p; //"*" is used to make the pointer variable of the data type after it is used to ex=int *p-> here p is the int pointer
    p=&a; //"&"  is used for the address of the variable

    cout<<a<<endl;
    printf("using pointer %d",*p);

    return 0;


}

