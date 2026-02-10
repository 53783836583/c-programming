//
// Created by adhit on 10-02-2026.
//#include <stdio.h>
//
// Created by adhit on 10-02-2026.
#include <stdio.h>
int main() {
    int plantype;
    int paymentmode;
    scanf("%d%d",&plantype,&paymentmode);

int plan1=199;
int plan2=399;

switch (plantype) {
    case 1:
        if (plantype== 1){
            printf("%d",plan1-20);
        }

        else {
            printf("%d",plan1);
            break;
        }

    case 2:
        if (plantype== 2) {
            printf("%d",plan2);
        }
        else {
            printf("%d",plan2);
            break;
        }


    default: {
        printf("%d","no cashback");
    }
}
        return 0;

}
