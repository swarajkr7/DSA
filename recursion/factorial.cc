// Factorial calculation
#include <iostream>
#include <stdio.h>
using namespace std;

int fac(int n){
    if(n==0)
    return 1;

    return fac(n-1)*n;
}

int main(){
    int n;
    n=6;
    int ans=fac(n);
    cout<<ans;

    return 0;

}