
#include <stdio.h>

int main()
{
    int qntlinha, qntcoluna;
    int cont1, cont2;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&qntlinha);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&qntcoluna);
    
    for(cont1=1; cont1<=qntlinha; cont1++){
        printf("\n");
        for (cont2=1; cont2<=qntcoluna; cont2++){
            printf("# ");
        }
    }
    
    

    return 0;
}
