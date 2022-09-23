#include <stdio.h>

int main(){
    int bin;
    int power = 0;
    int decimal;
    int number;
    printf("Enter the binary number:");
    scanf("%d",&bin);
    while(bin>0){
        number = bin%10;
        number = number<<power;
        decimal = decimal + number;
        bin = bin/10;
        power++;
    }
    printf("The number in decimal is %d",decimal);


    return 0;
}
