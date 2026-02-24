#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5 //definindo máximo de territórios a serem cadastrados

typedef struct {
    char nome[30] , cor[10];
    int tropas;
   } Territorio;

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpa o buffer de entrada
}

int main() {

    Territorio territorios[MAX_TERRITORIOS];
    int i;

    printf("========================================\n");
    printf("   SISTEMA DE CADASTRO DE TERRITORIOS\n");
    printf("========================================\n\n");

for ( i = 0; i < MAX_TERRITORIOS; i++) {
    printf("Digite o nome do território %d: ", i + 1);
    fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
    territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // Remove a nova linha

    printf("Digite a cor do território %d: ", i + 1);
    fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
    territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0'; // Remove a nova linha

    printf("Digite o número de tropas no território %d: ", i + 1);
    scanf("%d", &territorios[i].tropas);

    limparBufferEntrada(); // Limpa o buffer após ler um número

    printf("\n"); // Pular uma linha para melhor formatação
}
    printf("\n========================================\n");
    printf("     TERRITORIOS REGISTRADOS\n");
    printf("========================================\n\n");

for ( i = 0; i < MAX_TERRITORIOS; i++){
    printf("Territorio %d:\n", i + 1);
    printf("  Nome:   %s\n", territorios[i].nome);
    printf("  Cor:    %s\n", territorios[i].cor);
    printf("  Tropas: %d\n", territorios[i].tropas);
    printf("----------------------------------------\n");
}

    return 0;
}
