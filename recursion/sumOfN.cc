#include <iostream>
#include <stdio.h>
using namespace std;

int Sum(int n){
    if(n==0)
    return 0;

    return Sum(n-1)+n;
}

int Add(int n){
    int s=0;
    
    for(int i=1; i<=n; i++)
    s=s+i;
    return s;
}

int main(){
    int n;
    n=0;
    int ans=Add(n);
    cout<<ans;

    return 0;
}