
#include <stdio.h>

int main()
{
    int idd;
    char continua = 's';
    
    do{
    printf("Digite sua idade: ");
    scanf("%d",&idd);
    
    
    if(idd>=18){
        printf("pode tirar carteira\n");
    }
    else{
        printf("Não pode tirar carteira\n");
        
        printf("Deseja continuar?(s/n) ");
        scanf("%c",&continua);
    }
    }while(continua == 's' || continua  == 'S');

    return 0;
}

