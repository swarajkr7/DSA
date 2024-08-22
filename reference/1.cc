#include <stdio.h>
#include <iostream>
using namespace std;

int main (){

    int a=1;
    int &r=a; //reference means to give one more name to the particular variable.No new sapce is beint alloted as we just 
    // giving it another name

    printf("%d",r++);
    cout<<endl;
    printf("%d",a);
    
    return 0;
}

