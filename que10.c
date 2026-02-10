//
// Created by adhit on 10-02-2026.
//
#include <stdio.h>
int main() {
    int code;
    int experience;
    scanf("?%d%d",&code,&experience);

    switch(code) {
        case 1:
            if ("code= developer(1)"){
            printf("50000");
            }

            else {
                printf("code=tester(2)");
                break;
            }
        case 2:
            if (experience >=3) {
                printf("experience*5000",experience+5000);
                break;
            }
            return 0;
    }
}