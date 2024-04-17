
#include <stdio.h>

int main()
{
    double n1,n2,n3,media;
    int contador=1;
    while(contador<=5){
    printf("Aluno %d:",contador);
    
    printf("Digite a 1º nota: ");
    scanf("%lf",&n1);
    while(n1<0 || n1>10){
        printf("Digite novamente a 1º nota: ");
        scanf("%lf",&n1); 
    }
    
    printf("Digite a 2º nota: ");
    scanf("%lf",&n2);
    while(n2<0 || n2>10){
        printf("Digite novamente a 2º nota: ");
        scanf("%lf",&n2); 
    }
    
    printf("Digite a 3º nota: ");
    scanf("%lf",&n3);
    while(n3<0 || n3>10){
        printf("Digite novamente a 3º nota: ");
        scanf("%lf",&n3); 
    }
    
    media = (n1+n2+n3)/3;
    printf("A média é: %.2lf",media);
    
    
    contador++;
    }
    
    

    return 0;
}

