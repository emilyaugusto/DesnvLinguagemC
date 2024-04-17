
#include <stdio.h>

int main()
{
    char resp;
    
    printf("Você concorda (s/n)? ");
    scanf("%c",&resp);
    
    if (resp == 's' || resp =='S'){
    printf("Concordou!");
    }
    else if (resp == 'n' || resp =='N'){
    printf("Discordou!");
    }
    else {
    printf("resposta inválida"); 
    }

    return 0;
}

