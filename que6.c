//
// Created by adhit on 10-02-2026.
//
#include <stdio.h>
int main() {
    int orderamount;
    int speedtype;
    int delivery;
    scanf("%d%d",&orderamount,&speedtype);

    switch (speedtype) {
        case 1:
            if (orderamount < 1000) {
                printf("%d",orderamount+100);
            }
            else {
                printf("%d",orderamount+100);
            }
            break;
        case 2:
            if (orderamount >= 1000) {
                printf("orderamount");
            }
    }
    return 0;

}