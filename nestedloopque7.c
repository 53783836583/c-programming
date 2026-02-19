//
// Created by adhit on 19-02-2026.
//
#include <stdio.h>
int main () {
    for (int i=1; i<=4; i++) {
        for (int s=1; s<=4-i; s++) {
            printf(" ");
        }
        for (int j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}