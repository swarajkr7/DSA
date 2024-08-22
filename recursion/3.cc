
#include <stdio.h>
#include <iostream>
using namespace std;

int fun(int n){
    static int x=0;

    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main(){
    
    int r=fun(5);
    printf("%d",r);

    int s=fun(5);
    printf("%d",s);

    return 0;
}