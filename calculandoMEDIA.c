#include <stdio.h>
#define name "*** Programa para calcular media ***"

float calcularMedia(float n1, float n2, float n3, float n4){
    return (n1 + n2 + n3 + n4) / 4;
}

int main(){
    float media = 0, n1, n2, n3, n4;

    printf(name"\n");
    //obter as notas

    //primeira nota
    printf("Insira a primeira nota:\n");
    scanf("%f", &n1);

        while (n1 > 10 || n1 < 0) // Enquanto a nota for inválida
        {
            printf("Nota invalida. A nota deve ser entre 0 e 10!\n");
            printf("Insira a primeira nota novamente:\n");
            scanf("%f", &n1);
        }
    printf("Nota registrada!\n");

    //segunda nota
    printf("Insira a segunda nota:\n");
    scanf("%f", &n2);

            while (n2 > 10 || n2 < 0) // Enquanto a nota for inválida
        {
            printf("Nota invalida. A nota deve ser entre 0 e 10!\n");
            printf("Insira a segunda nota novamente:\n");
            scanf("%f", &n2);
        }
    printf("Nota registrada!\n");

    //terceira nota
    printf("Insira a terceira nota:\n");
    scanf("%f", &n3);

        while (n3 > 10 || n3 < 0) // Enquanto a nota for inválida
        {
            printf("Nota invalida. A nota deve ser entre 0 e 10!\n");
            printf("Insira a terceira nota novamente:\n");
            scanf("%f", &n3);
        }
    printf("Nota registrada!\n");

    //quarta nota
    printf("Insira a quarta nota:\n");
    scanf("%f", &n4);

        while (n4 > 10 || n4 < 0) // Enquanto a nota for inválida
        {
            printf("Nota invalida. A nota deve ser entre 0 e 10!\n");
            printf("Insira a quarta nota novamente:\n");
            scanf("%f", &n4);
        }
    printf("Nota registrada!\n");


    media = calcularMedia(n1, n2, n3, n4);

    printf("============================\n");

    if (media >= 7)
    {
        printf("Parabens!! Voce passou com media: %.2f\n", media);
    } 
    else if (media > 40 || n1 > 10 || n2 > 10 || n3 > 10 || n4 > 10)
    {
        printf("Algum valor foi inserido errado!");
    }
    else 
    {
        printf("Voce nao passou, tente a recuperacao. Media: %.2f\n", media);
    }
    return 0;
}