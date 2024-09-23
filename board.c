#include <stdio.h>

void star() {
    int rank;
    
    printf("Enter number of rank: ");
    scanf("%d", &rank);

    for (int i = 1; i <= rank; i++) {
        for (int j = 0; j < i; j++)
            printf("*");
        
        printf("\n");
    }
}


void checker() {
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++)
            printf(".  ");

        printf("\n");
    }
}


void chess() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0)
                printf("#  ");
            else
                printf(".  ");
        }
        printf("\n");
    }
}


void main() {
    
}