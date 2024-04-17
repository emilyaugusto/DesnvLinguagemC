
#include <stdio.h>

int main()
{
    double preco, soma=0;
    
    do{
    printf("Digite o preço: R$ ");
    scanf("%lf",&preco);
    
    soma=soma+preco;
    
    printf("Soma: R$%.2lf \n \nc",soma);
    
}    while(preco!=0);
    printf("--> o total é: R$%.2lf \n \n",soma);

    return 0;
}
