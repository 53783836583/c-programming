#include <stdio.h>
//
// Created by adhit on 10-02-2026.
//#include<stdio.h>
int main() {
    int sleeper=300;
    int ac=1000;
    int travel,age;
    scanf("%d%d",&travel,&age);

    switch (travel) {
        case 1:
            if (age>=12) {
                printf("%d",sleeper-150);
            }
            else {
                printf("%d",sleeper);
                break;
            }
        case 2:
            if (age>=60) {
                printf("%d",ac-330);
            }
            else{
                printf("%d",ac);
                break;

            }
        default:
            printf("travel age is invalid");

            return 0;
    }
}