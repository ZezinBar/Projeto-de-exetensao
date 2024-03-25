#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

void menu_bebida()
{
    printf("Selecione o que deseja beber: \n\n");
    printf("[1] Refrigerante - \n");
    printf("[2] Água - \n");
    printf("[3] Suco - \n");
}

int main()
{
    char escolha2;
    int escolha1, cont_q;
    float preco, kg;

    printf("[1] Prato (R$10,00 pro Kg)\n");
    printf("[2] Quentinha\n");
    printf("Como deseja a sua comida? \n");
    scanf(" %d", &escolha1);

    if (escolha1 == 2)
    {
        printf("Valor total = R$20,50.\n");
        cont_q += 1;
    }
    else if (escolha1 == 1) 
    {
        printf("Digite quantos quilos a comida possui: ");
        scanf(" %f", &kg);

        preco = kg * 10;

        printf("\n\n%.2f\n\n", preco);
    }
    else
    {
        printf("Opção inválida!\n");
    }
    
    printf("Deseja beber alguma coisa (S/N)? ");
    scanf(" %c", &escolha2);
    escolha2 = toupper(escolha2);
    
    if (escolha2 == 'S')
    {
        menu_bebida();
    }
}