#include <stdio.h>
#include <string.h>

int main() {
    char resposta[4]; // Variável para armazenar a resposta
    int contador_sim = 0; // Inicializa o contador de respostas "sim"

    // Perguntas separadas
    printf("Pergunta 1: Telefonou para a vítima?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0) {
        contador_sim++;
    }

    printf("Pergunta 2: Esteve no local do crime?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0) {
        contador_sim++;
    }

    printf("Pergunta 3: Mora perto da vítima?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0) {
        contador_sim++;
    }

    printf("Pergunta 4: Devia para a vítima?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0) {
        contador_sim++;
    }

    printf("Pergunta 5: Já trabalhou com a vítima?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0) {
        contador_sim++;
    }

    if (contador_sim == 2) {
        printf("Suspeita\n");
    } 
    
    else if (contador_sim ==3 && contador_sim == 4){
        printf("Cumplice\n");
    }
    
    else if (contador_sim == 5){
        printf("Assassino\n");
    }
    else{
        printf("Inocente\n");
    }
    
    
    return 0;
}
