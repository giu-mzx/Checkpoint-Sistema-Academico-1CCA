#include "stdio.h"

int main() {
    float nota1, nota2, media; //Faltava o ;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); //Faltava o identificador de variável

    media = (nota1 + nota2) / 2; //Faltava os ()

    if (media >= 6) { //Faltava o > 
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}