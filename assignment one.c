#include <stdio.h>
int main() {
    int month;
    printf("enter month number\n");
    scanf("%d",&month);
    switch(month) {
        case 1: {
            printf("the month is january\n");
            break;
        }
        case 2 : {
            printf("the month is february\n");
            break;
        }
        case 3 : {
            printf("the month is march\n");
            break;
        }
        case 4 : {
            printf("the month is april\n");
            break;
        }
        case 5 : {
            printf("the month is may\n");
            break;
        }
        case 6 : {
            printf("the month is june\n");
            break;
        }
        case 7 : {
            printf("the month is july\n");
            break;
        }
        case 8 : {
            printf("the month is august\n");
            break;
        }
        case 9 : {
            printf("the month is september\n");
            break;
        }
        case 10 : {
            printf("the month is octomber\n");
            break;
        }
        case 11 : {
            printf("the month is november\n");
            break;
        }
        case 12 : {
            printf("the month is december\n");
            break;
        }
        default : {
            printf("invalid month number\n");
        }
    }
    return 0;
}

