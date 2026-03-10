//
// Created by adhit on 09-03-2026.
//
#include<stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    bool found = false;
    for (int i = 0; str[i]!='\0'; i++)
        if (str[i]>'A' && str[i]<'Z') {
            found =true;
            break;
        }
    if (found)
        printf("Valid");
    else printf("Invalid");
}