#include <stdio.h>
//
// Created by adhit on 09-02-2026.
//#include<stdio.h>
int main() {
    int marks,grade;
    scanf("%d %d",&marks,&grade);


    switch(marks /10) {
        case 1:
            printf("grade A");
            break;

        case 2:
            printf("grade B");
            break;

        case 3:
            printf("grade C");
            break;

        case 4:
            printf("grade D");
            break;

        case 5:
            printf("grade E");
            break;

        case 6:
            printf("grade F");
            break;

        case 7:
            printf("grade supplementary");
            break;

        default:
            printf("grade fail");
    }
    return 0;
}