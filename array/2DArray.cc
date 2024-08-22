#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    int *B[3];
    int **C; 

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++){
            printf("%d ",A[i][j]);
        }
        cout<<"\n";
    }


    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(3*sizeof(int *));
    C[1]=(int *)malloc(3*sizeof(int *));
    C[2]=(int *)malloc(3*sizeof(int *));
    
    return 0;

}