#include<stdio.h>

int main(){
    int decimal;
    int bin[10];
    int x;
    printf("Enter deciman number :");
    scanf("%d",&decimal);
    x = 0;
    while(decimal>0){
        if((decimal & 1) == 0){
            bin[x] = 0;
            x++;
        }else{

            bin[x] = 1;
            x++;
        }
        decimal = decimal>>1;

    }
    printf("The binary number is: ");
    for(int i=x-1;i>=0;i--) printf("%d",bin[i]);

}
