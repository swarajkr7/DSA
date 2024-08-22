#include <stdio.h>
#include <iostream>
using namespace std;


int NcR(int n, int r){
    if(r==0||n==r){
        return 1;
    }else{
      return NcR(n-1,r-1) + NcR(n-1,r);
    }

}

int main(){
    int ans;
    ans=NcR(2,2);
    cout<<ans;

    return 0;

}