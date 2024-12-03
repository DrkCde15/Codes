#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXPRODUTOS 50

typedef struct{
    int ID;
    char nomeProduto[50];
    int quantidadeEmEstoque;
    double valorDoProduto;
    int ativo;  // Novo campo para indicar se o produto está ativo
} Produto;

void cadastrarProduto(Produto *listaProdutos, int *contadorProduto);
void alterarProduto(Produto *listaProdutos, int ID, int contadorProduto);
void consultarProduto(Produto *listaProdutos, int ID, int contadorProduto);
void excluirProduto(Produto *listaProdutos, int ID, int *contadorProduto);
void imprimirDados(Produto *listaProdutos);
void venderProduto(Produto *listaProdutos, int ID, int quantidade, int contadorProduto);
void imprimirLista(Produto *listaProdutos, int contadorProduto);
void descontoProduto(Produto *listaProdutos, int ID, int contadorProduto);
int encontrarProdutoPorID(Produto *listaProdutos, int ID, int contadorProduto);

void cadastrarProduto(Produto *listaProdutos, int *contadorProduto){
    Produto *produto = &listaProdutos[*contadorProduto];
    produto->ID = *contadorProduto + 1;
    produto->ativo = 1;  // Produto ativo por padrão
    printf("\nDigite o nome do produto: ");
    scanf(" %[^\n]", produto->nomeProduto);
    printf("Digite a quantidade em estoque do produto (Somente numeros naturais): ");
    scanf(" %i", &produto->quantidadeEmEstoque);
    while(produto->quantidadeEmEstoque < 0){
        printf("A quantidade digitada esta errada. So eh possivel existir numeros positivos de produtos.\n");
        printf("Digite novamente: ");
        scanf(" %d", &produto->quantidadeEmEstoque);
    }
    printf("Digite o valor do produto: ");
    scanf(" %lf", &produto->valorDoProduto);
    while(produto->valorDoProduto < 0){
        printf("O valor digitado esta errado. So eh possivel adicionar valores positivos para os produtos.\n");
        printf("Digite novamente: ");
        scanf(" %lf", &produto->valorDoProduto);
    }
    
    (*contadorProduto)++;
    printf("Produto adicionado com sucesso!\n\n");
}

void imprimirDados(Produto *produto){
    if (produto->ativo) {
        printf("\nID: %d\n", produto->ID);
        printf("Nome: %s\n", produto->nomeProduto);
        printf("Quantidade em estoque: %d\n", produto->quantidadeEmEstoque);
        printf("Valor do produto: %.2f\n\n", produto->valorDoProduto);
    }
}

void alterarProduto(Produto *listaProdutos, int ID, int contadorProduto){
    int indice = encontrarProdutoPorID(listaProdutos, ID, contadorProduto);
    
    if (indice != -1) {
        printf("\nDados atuais do produto:\n");
        imprimirDados(&listaProdutos[indice]);
    
        printf("\nDigite o nome do produto: ");
        scanf(" %[^\n]", listaProdutos[indice].nomeProduto);
        printf("Digite a quantidade em estoque do produto: ");
        scanf(" %d", &listaProdutos[indice].quantidadeEmEstoque);
        printf("Digite o valor do produto: ");
        scanf(" %lf", &listaProdutos[indice].valorDoProduto);
        
        printf("Produto alterado com sucesso!\n\n");
    } else {
        printf("Produto com o ID %d nao encontrado.\n\n", ID);
    }
}

void consultarProduto(Produto *listaProdutos, int ID, int contadorProduto){
    int indice = encontrarProdutoPorID(listaProdutos, ID, contadorProduto);
    
    if (indice != -1) {
        imprimirDados(&listaProdutos[indice]);
    } else {
        printf("Produto com o ID %d nao encontrado.\n\n", ID);
    }
}

void excluirProduto(Produto *listaProdutos, int ID, int *contadorProduto){
    int indice = encontrarProdutoPorID(listaProdutos, ID, *contadorProduto);
    
    if (indice != -1) {
        listaProdutos[indice].ativo = 0;  // Marca o produto como inativo
        printf("Produto excluido com sucesso!\n\n");
    } else {
        printf("Produto com o ID %d nao encontrado.\n\n", ID);
    }
}

void venderProduto(Produto *listaProdutos, int ID, int quantidade, int contadorProduto){
    int indice = encontrarProdutoPorID(listaProdutos, ID, contadorProduto);
    
    if (indice != -1) {
        if (listaProdutos[indice].quantidadeEmEstoque >= quantidade) {
            printf("Preco da venda: %.2f\n", listaProdutos[indice].valorDoProduto * quantidade);
            listaProdutos[indice].quantidadeEmEstoque -= quantidade;
            printf("Produto vendido com sucesso!\n\n");
        } else {
            printf("Estoque insuficiente para realizar a venda.\n\n");
        }
    } else {
        printf("Produto com o ID %d nao encontrado.\n\n", ID);
    }
}

void imprimirLista(Produto *listaProdutos, int contadorProduto){
    printf("\n------------- Lista de todos os produtos cadastrados -------------\n\n");
    for(int i = 0; i < contadorProduto; i++){
        if (listaProdutos[i].ativo) {
            printf("ID: %d      Nome: %s\n", listaProdutos[i].ID, listaProdutos[i].nomeProduto);
        }
    }
    printf("\n");
}

void descontoProduto(Produto *listaProdutos, int ID, int contadorProduto){
    int indice = encontrarProdutoPorID(listaProdutos, ID, contadorProduto);
    
    if (indice != -1) {
        double desconto;
        printf("\nDigite o desconto que sera dado ao produto (em porcentagem, ex: 45 para 45%%): ");
        scanf("%lf", &desconto);

        if (desconto < 0 || desconto > 100) {
            printf("Desconto invalido. O valor deve estar entre 0 e 100.\n");
        } else {
            listaProdutos[indice].valorDoProduto -= (listaProdutos[indice].valorDoProduto * (desconto / 100));
            printf("Novo valor do produto: %.2f\n", listaProdutos[indice].valorDoProduto);
            printf("Desconto aplicado com sucesso!\n\n");
        }
    } else {
        printf("Produto com o ID %d nao encontrado.\n\n", ID);
    }
}

int encontrarProdutoPorID(Produto *listaProdutos, int ID, int contadorProduto) {
    for (int i = 0; i < contadorProduto; i++) {
        if (listaProdutos[i].ID == ID && listaProdutos[i].ativo) {
            return i;  // Retorna o índice do produto encontrado
        }
    }
    return -1;  // Retorna -1 se o produto não for encontrado
}

int main(){
    Produto listaProdutos[MAXPRODUTOS];
    int contadorProduto = 0;
    int opcao, ID, quantidade;
    
    do {
        printf("------ * MENU * ------\n");
        printf("1. Cadastrar produto\n");
        printf("2. Alterar dados do produto\n");
        printf("3. Consultar produto\n");
        printf("4. Excluir Produto\n");
        printf("5. Consultar lista de produtos\n");
        printf("6. Vender produto\n");
        printf("7. Dar desconto a um produto\n");
        printf("8. Encerrar o programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1: cadastrarProduto(listaProdutos, &contadorProduto);
                    break;
            
            case 2: printf("\nDigite o ID do produto que sera alterado: ");
                    scanf("%d", &ID);
                    alterarProduto(listaProdutos, ID, contadorProduto);
                    break;
                    
            case 3: printf("\nDigite o ID do produto que deseja consultar: ");
                    scanf("%d", &ID);
                    consultarProduto(listaProdutos, ID, contadorProduto);
                    break;
                    
            case 4: printf("\nDigite o ID do produto que deseja excluir: ");
                    scanf("%d", &ID);
                    excluirProduto(listaProdutos, ID, &contadorProduto);
                    break;
                    
            case 5: imprimirLista(listaProdutos, contadorProduto);
                    break;
                    
            case 6: printf("\nDigite o ID do produto que deseja vender: ");
                    scanf("%d", &ID);
                    printf("Digite a quantidade que sera vendida: ");
                    scanf("%d", &quantidade);
                    while(quantidade <= 0){
                        printf("A quantidade a ser vendida deve ser maior ou igual a 1. Entre novamente com o valor: ");
                        scanf("%d", &quantidade);
                    }
                    venderProduto(listaProdutos, ID, quantidade, contadorProduto);
                    break;
            
            case 7: printf("\nDigite o ID do produto que recebera desconto: ");
                    scanf("%d", &ID);
                    descontoProduto(listaProdutos, ID, contadorProduto);
                    break;
            
            case 8: printf("\nObrigado por usar o nosso programa na sua loja!\n");
                    printf("Encerrando a sua execucao...");
                    break;
            
            default: printf("\nO valor digitado nao eh valido. Digite novamente: \n\n");
                     break;
        }
        
    } while(opcao != 8);
    
    return 0;
}