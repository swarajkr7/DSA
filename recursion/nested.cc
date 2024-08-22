#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }else{
        return fun(fun(n+11));
    }
}

int main(){
    int n;
    n=95;
    int ans=fun(n);
    cout<<ans;

    return 0;

}


