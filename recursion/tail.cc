// In tail recursion every instrcution should be executed before calling the functin means fuction should be the last
// instruction that should be executed so that only it is called as tail recursion.
#include <iostream>
#include <stdio.h>
using namespace std;

void fun(int n){
    if(n>0){
        printf("%d ",n);
        fun(n-1);
    }
};
int main(){
    int n;
    n=5;
    fun(5);

    return 0;
}