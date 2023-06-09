#include <stdio.h>

#define clientesmax 5
struct Cliente {
    int codigo;
    char nome[50];
    char endereco[100];
    int data_nascimento[3];
    char sexo;
    float valordevido;
    float valorcredito;
    int idade;
    char status[10];
};
void cadastrarClientes(struct Cliente clientes[]) {
    printf("Cadastro de Clientes:\n");
    for (int i = 0; i < clientesmax; i++) {
        printf("\nCliente %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &clientes[i].codigo);
        printf("Nome: ");
        scanf("%s", clientes[i].nome);
        printf("Endereco: ");
        scanf("%s", clientes[i].endereco);
        printf("Data de Nascimento (dia mes ano): ");
        scanf("%d %d %d", &clientes[i].data_nascimento[0], &clientes[i].data_nascimento[1], &clientes[i].data_nascimento[2]);
        printf("Sexo (M/F): ");
        scanf(" %c", &clientes[i].sexo);
        printf("Valor Devido: ");
        scanf("%f", &clientes[i].valordevido);
        printf("Valor em Credito: ");
        scanf("%f", &clientes[i].valorcredito);
        printf("Idade: ");
        scanf("%d", &clientes[i].idade);
        printf("Status do Cadastro (ativo/inativo): ");
        scanf("%s", clientes[i].status);
    }
}
void relatorio(struct Cliente clientes[]) {
    printf("\nRelatorio de Clientes Cadastrados:\n");
    for (int i = 0; i < clientesmax; i++) {
        printf("\nCliente %d\n", i + 1);
        printf("Codigo: %d\n", clientes[i].codigo);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Endereco: %s\n", clientes[i].endereco);
        printf("Data de Nascimento: %d/%d/%d\n", clientes[i].data_nascimento[0], clientes[i].data_nascimento[1], clientes[i].data_nascimento[2]);
        printf("Sexo: %c\n", clientes[i].sexo);
        printf("Valor Devido: %.2f\n", clientes[i].valordevido);
        printf("Valor em Credito: %.2f\n", clientes[i].valorcredito);
        printf("Idade: %d\n", clientes[i].idade);
        printf("Status do Cadastro: %s\n", clientes[i].status);
    }
}
int main() {
    struct Cliente clientes[clientesmax];
    char opcao;
    do {
        cadastrarClientes(clientes);
        relatorio(clientes);

        printf("\nDeseja executar o algoritmo novamente? (S/N): ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');
    printf("Fim de execução.\n");

    return 0;
}