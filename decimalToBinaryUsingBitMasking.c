#include <stdio.h>



int main(){

    unsigned decimal;
    int totBits = 32;
    unsigned mask = 1<<(totBits-1);
    printf("Enter decimal number:");
    scanf("%d",&decimal);
    for(int i=0;i<totBits;i++){
        if((decimal&mask) == 0){
            printf("0");
        }else{
            printf("1");
        }
        mask>>=1;

    }

    return 0;
}
