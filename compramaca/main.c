
#include <stdio.h>

int main()
{
    double quant, result ;
    
    printf("Qual o número de maçãs compradas? \n");
    scanf("%lf",&quant);
    
    if(quant <12){
        result = quant * 1.10;
    }
    else {
        result = quant * 0.95;
    }
    
    printf("O valor total da compra é: %.2lf",result);


    return 0;
}

