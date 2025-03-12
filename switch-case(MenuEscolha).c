#include <stdio.h>

int main(){
    int opcao = 0;
    float depositar, sacar;
    float saldo = 0;

    while(opcao != 4) {  // Continua até o usuário escolher "4 - Sair"
        printf("|-------------------------|\n");
        printf("|1 - Ver saldo            |\n");
        printf("|2 - Depositar dinheiro   |\n");
        printf("|3 - Sacar dinheiro       |\n");
        printf("|4 - Sair                 |\n");
        printf("|-------------------------|\n");

        printf("Qual opcao voce quer?");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Seu saldo e: R$%.2f!!\n", saldo);
            break;

        case 2:
            printf("Quanto voce quer depositar?\n");
            scanf("%f", &depositar);
            if (depositar <= 0)
            {
                printf("Valor invalido!\n");
            } else {
                saldo += depositar;
                printf("Deposito de %.2f realizado! seu saldo: R$%.2f\n", depositar, saldo); 
            }
            break;

        case 3:
            printf("Quanto voce quer sacar?\n");
            scanf("%f", &sacar);
                if (saldo < sacar)
                {
                    printf("Voce nao pode realizar essa funcao! Saldo insuficiente!!!\n");
                } 
                else if (sacar <= 0) 
                {
                    printf("Insira um valor correto!\n");
                }
                else 
                {
                    saldo -= sacar;
                    printf("Voce sacou R$%.2f O seu saldo atual e: R$%.2f\n", sacar, saldo);
                }
            break;

        case 4:
            printf("Obrigado por usar o programa! Saindo...\n");
            break;

        default:
            printf("Tecla incorreta! Por favor, insira uma opção de 1 a 4.\n");
            break;
        }
    } 
}