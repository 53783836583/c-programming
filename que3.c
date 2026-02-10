#include <stdio.h>
//
// Created by adhit on 10-02-2026.
//...#include<stdio.h>
int main() {
    int accounttype,balance,withdrawamount;

    scanf("%d",&accounttype);
    scanf("%d",&balance);
    scanf("%d",&withdrawamount);

    switch (accounttype) {
        case 1:
            if (balance >= withdrawamount) {
                printf("transaction success");
            }
            else {
                printf("insufficient balance");
            }
            break;

        case 2:
            if (withdrawamount>5000) {
                printf("limit exceeded");
            } else if (balance >= withdrawamount) {
                printf("transaction success");
            } else {
                printf("insufficient balance");
            }
            break;

        default:
            printf("invalid account type");
    }
    return 0;
}





