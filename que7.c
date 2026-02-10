//
// Created by adhit on 10-02-2026.
//
#include <stdio.h>
int main() {
    int accounttype;
    int years;
    scanf("%d%d",accounttype,&years);

    switch (accounttype) {
        case 1:
            if (years>3) {
                printf("%d",'amount'+7000);
            }
            else {
                printf("%d",years);
            }
        case 2:
            if (years<=3) {
                printf("%d",'amount'+5000);
            }
    }
return 0;
}

