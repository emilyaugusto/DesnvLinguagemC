
#include <stdio.h>

int main()
{
    char resp;
    
    printf("Em que turno você estuda?\n Digite: \n M-matutino \n V-vespertino \n N-noturno.\n \n");
    scanf("%c",&resp);
    
    if (resp == 'm'){
    printf("Bom dia!");
    }
    else if (resp == 'v'){
    printf("Boa tarde!");
    }
    else if (resp == 'n'){
    printf("Boa noite!");
    }
    else {
    printf("resposta inválida"); 
    }

    return 0;
}
