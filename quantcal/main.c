
#include <stdio.h>

int main()
{
    int quant, cal, result;
    
   
    printf("Digite a quantidade de alimentos inseridas hoje: ");
    scanf("%d",&quant);
    
    printf("Digite a quantidade de calorias por alimento: ");
    scanf("%d",&cal);
    
    result=quant*cal;
    
    printf("Quantidade de calorias digeridas hoje foi: %d",result);
    
    

    return 0;
}

