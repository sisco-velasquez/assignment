#include <stdio.h>
int main() {
    int number1,number2,number3;
    printf("enter three numbers ",number1,number2,number3);
    scanf("%d, %d, %d",&number1,&number2,&number3);

    if(number1>number2 && number1 >number3){
    printf("the largest number is %d\n",number1);
    }
    else if(number2>number1 && number2>number3){
    printf("the largest number is %d\n",number2);
    }
    else{("the largest number is %d",number3);
    }
    return 0;
}



