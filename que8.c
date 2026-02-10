//
// Created by adhit on 10-02-2026.
//
#include <stdio.h>
int main() {
    int marks;
    int attendance;
    scanf("%d%d", &marks, &attendance);

    switch (marks) {
        case 1:
            if (attendance < 75) {
                printf("fail");

            }
            else {
                printf("distinction");
            }
            break;
        case 2:
            if (marks>75 && marks<50) {
                printf("pass");
            }
            else {
                printf("fail");
                break;
            }
            return 0;
    }
}