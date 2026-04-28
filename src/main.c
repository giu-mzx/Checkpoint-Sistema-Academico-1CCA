#include <stdio.h>

int main() {
 int opcao;
 float n1 = 0, n2 = 0, media = 0;
 int notasInseridas = 0;
 int mediaCalculada = 0;

 do {
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

 switch(opcao) {

 case 1:
 printf("\n--- INSERIR NOTAS ---\n");

 do {
 printf("Digite a nota 1 (0 a 10): ");
 scanf("%f", &n1);
 if (n1 < 0 || n1 > 10)
 printf("Nota invalida!\n");
 } while (n1 < 0 || n1 > 10);

 do {
 printf("Digite a nota 2 (0 a 10): ");
 scanf("%f", &n2);
 if (n2 < 0 || n2 > 10)
 printf("Nota invalida!\n");
 } while (n2 < 0 || n2 > 10);

 notasInseridas = 1;
 mediaCalculada = 0;
 break;

 case 2:
 if (!notasInseridas) {
 printf("Insira as notas primeiro!\n");
 } else {
 media = (n1 + n2) / 2;
 mediaCalculada = 1;
 printf("Media: %.2f\n", media);
 }
 break;

 case 3:
 if (!mediaCalculada) {
 printf("Calcule a media primeiro!\n");
 } else {
 if (media >= 6) {
 printf("Aluno aprovado\n");
 } else if (media >= 5) {
 printf("Aluno em recuperacao\n");
 } else {
 printf("Aluno reprovado\n");
 }
 }
 break;

 case 4:
 if (!mediaCalculada) {
 printf("Nenhum resultado disponivel!\n");
 } else {
 printf("\n--- RESULTADO ---\n");
 printf("Nota 1: %.2f\n", n1);
 printf("Nota 2: %.2f\n", n2);
 printf("Media: %.2f\n", media);

 if (media >= 6) {
 printf("Situacao: Aprovado\n");
 } else if (media >= 5) {
 printf("Situacao: Recuperacao\n");
 } else {
 printf("Situacao: Reprovado\n");
 }
 }
 break;

 case 5: {
 float a, b, c;

 printf("\n--- CALCULO DE DERIVADA ---\n");
 printf("Funcao: f(x) = ax^2 + bx + c\n");

 printf("Digite o valor de a: ");
 scanf("%f", &a);

 printf("Digite o valor de b: ");
 scanf("%f", &b);

 printf("Digite o valor de c: ");
 scanf("%f", &c);
 printf("f(x) = %.2fx^2 + %.2fx + %.2f\n", a, b, c);
 printf("f'(x) = %.0fx + %.0f\n", 2*a, b);
 break;
 }
 case 6:
 printf("Encerrando sistema...\n");
 break;

 default:
 printf("Opcao invalida!\n");
 }
 } while(opcao != 6);

 return 0;
}