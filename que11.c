//
// Created by adhit on 10-02-2026.
//
#include <stdio.h>
int main () {
    int plantype;
    float dataused;
    scanf("%d%d",&plantype,&dataused);

    switch (plantype) {
        case 1:
            if (dataused <=100.00) {
                printf("speed reduced");
            }
            else
            {
                printf("normalspeed");
            }
            break;
        case 2:
            if (dataused <=200.00) {
                printf("speed reduced");
            }
            else {
                printf("normalspeed");
            }
            break;
    }
}
