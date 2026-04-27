#include <stdio.h>

int main()
{
    int opcao;
    float n1 = 0, n2 = 0, media = 0;
    int notasInseridas = 0;
    int mediaCalculada = 0;

    do
    {
        printf("\n============================\n");
        printf(" SISTEMA EQUIPE\n");
        printf("============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
    } while (opcao != 6);
}