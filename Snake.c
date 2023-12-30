#include<stdio.h>
#include<stdlib.h>

void main(){
    int topValue=20,leftValue=20;///parent node
    /*
    int topValue=20,leftValue=19;///c1
    int topValue=20,leftValue=18;
    int topValue=20,leftValue=17;
    int topValue=20,leftValue=16;*/

    while(1){

    ///to change row
    for(int i=0;i<topValue;i++)
        printf("\n");


    ///to change column
    for(int i=0;i<leftValue;i++)
        printf(" ");

    printf("O");

    char c = getch();
    system("cls");
    switch(c){
        case 'w': topValue--; break;
        case 's': topValue++; break;
        case 'a': leftValue--; break;
        case 'd': leftValue++; break;
        default : exit(0);
    }
    }
}
