
#include <stdio.h>

int main()
{
    int contador,result,tabuada;
    
    printf("Tabuadas até 10\n");
    
    for(tabuada=1; tabuada<=10; tabuada++){
        printf("Tabuada do %d\n", tabuada);
    for(contador=0; contador<=10; contador++){
        
        result = tabuada * contador;
        printf("%d x %d = %d\n",contador,result);
    }
    }

    return 0;
}
