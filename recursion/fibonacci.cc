#include <iostream>
#include <stdio.h>
using namespace std;

// int fib(int n){
//     int t0=0, t1=1, s, i;

//     if(n<=1) return n;

//     for(i=2; i<=n; i++)
//     {
//         s=t0+t1;

//         t0=t1;
//         t1=s;
//     }

//     return s;
// }
// int rfib(int n){
//     if(n<=1) return n;
//     return rfib(n-2) + rfib(n-1);
// }

int F[10];

int fibo(int n){

    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fibo(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fibo(n-1);
        }
    }
    return fibo(n-2)+fibo(n-1);

}

int main(){

    int i;
    for(i=0; i<10; i++)
        F[i]=-1;

    printf("%d \n",fibo(6));
    return 0;
}