//
// Created by adhit on 13-02-2026.
//
#include <stdio.h>
int main () {
    int sum = 0;
    for (int i =2; i <=5; i++) {
        if ( i % 2 == 0)
        sum = sum + i;
        printf("%d\n",i);
    }
    return 0;
}