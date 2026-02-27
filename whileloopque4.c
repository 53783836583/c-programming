//
// Created by adhit on 27-02-2026.
//
#include <stdio.h>
int main () {
    int n;
    scanf ("%d", &n);
    int strekM=0;
    int strek=0;
    while (n!=0) {
        int i;
        scanf ("%d", &i);
        if (i==0) {
            strek++;
        }
        else {
            strek++;
        }
        if (strekM<strek)
            strekM=strek;
        n--;
    }
    printf ("Longest Failure Streak: %d", strekM);
}