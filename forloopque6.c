//
// Created by adhit on 12-02-2026.
//
#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int sum=1;
    for (int i=1; i<=n; i++) {
        sum*=i;
    }
    printf("%d", sum);
    return 0;
}