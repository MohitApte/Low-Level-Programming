#include<stdio.h>
#include<stdint.h>

int main(){

    int32_t var1 = 5, var2 = 2, var3 = 0, remainder, quotient;

    asm volatile("divl %%ebx;"
                 "movl %%edx, %0"
        : "=b" (remainder) , "=r" (quotient)
        : "a" (var1), "b" (var2), "d" (var3)
    );

    printf("On dividing %d by %d quotient is %d and remainder is %d",var1,var2,quotient,remainder);


    return 0;
}
