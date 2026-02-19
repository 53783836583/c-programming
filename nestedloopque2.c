//
// Created by adhit on 19-02-2026.
//
#include <stdio.h>
int main () {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}