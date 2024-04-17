
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    
    if (num %2){
    printf("é par");
    }
    else {
      printf("é impar"); 
    }

    return 0;
}
