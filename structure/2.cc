#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    struct Card{
        int face;
        int shape;
        int color;
    }

    Card ={1,0,0};

    printf("The face of the card id %d",Card.face);

    return 0;
}