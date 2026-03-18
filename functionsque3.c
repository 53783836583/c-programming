//
// Created by adhit on 10-03-2026.
//
#include <stdio.h>
void Even_Odd(int p) {
    printf("%s",(p%2==0)?"Even":"Odd");
}
int main() {
    int a;
    scanf("%d",&a);
    Even_Odd(a);
}