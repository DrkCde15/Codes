#include <stdio.h>

int main(){
    float valor_compras;
    int tipo_pag;
    int forma_pag;
    int num_parcelas;
    float valor_final;

    printf("\nInsira o valor total das compras: ");
    scanf("%f", &valor_compras);

    printf("\nTipos de Pagamentos: \n1 - A Vista\n2 - Parcelado");
    printf("\n\nInsira o tipo de pagamento (numero): ");
    scanf("%d", &tipo_pag);

    if(tipo_pag == 1){
        printf("\n\nFormas de Pagamentos: \n1 - Pix\n2 - Boleto");
        printf("\n\nInsira a forma de pagamento: ");
        scanf("%d", &forma_pag);

        if(forma_pag == 1){
            valor_final = valor_compras - (valor_compras * 0.05);
            printf("\n\nValor das Compras: R$%.2f", valor_compras);
            printf("\nPagamento A Vista via Pix");
            printf("\nValor Final: R$%.2f", valor_final);
        }
        else if(forma_pag == 2){
            valor_final = valor_compras;
            printf("\n\nValor das Compras: R$%.2f", valor_compras);
            printf("\nPagamento A Vista via Boleto");
            printf("\nValor Final: R$%.2f", valor_final);
        }else{
            printf("-------------------------------------------------------------");
            printf("\nParece que houve um erro! Reinicialize e tente novamente!\n");
            printf("-------------------------------------------------------------");
        }
    }
    else if(tipo_pag == 2){
        printf("Numero de parcelas (2 ou 3): ");
        scanf("%d", &num_parcelas);

        if(num_parcelas == 2){
            valor_final = valor_compras - (valor_compras * 0.05);
            printf("\n\nValor das Compras: R$%.2f", valor_compras);
            printf("\nParcelado em %d vezes", num_parcelas);
            printf("\nValor Final: R$%.2f", valor_final);
        }
        else if(num_parcelas == 3){
            valor_final = valor_compras + (valor_compras * 0.1);
            printf("\n\nValor das Compras: R$%.2f", valor_compras);
            printf("\nParcelado em %d vezes", num_parcelas);
            printf("\nValor Final: R$%.2f", valor_final);
        }
        else{
            printf("-------------------------------------------------------------");
            printf("\nParece que houve um erro! Reinicialize e tente novamente!\n");
            printf("-------------------------------------------------------------");
        }

    }
    else{
        printf("-------------------------------------------------------------");
        printf("\nParece que houve um erro! Reinicialize e tente novamente!\n");
        printf("-------------------------------------------------------------");
    }

    printf("\n\n");

    return 0;
}