#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao, numero1, numero2;

    do {
        printf("Escolha uma das alternativas a seguir:\n");
        printf("1. adicao\n2. subtracao\n3. multiplicacao\n4. divisao\n5. sair\n\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Escolha dois valores:");
                scanf("%d%d", &numero1, &numero2);
                printf("adicao: %d\n", numero1 + numero2);
                break;
            case 2:
                printf("Escolha dois valores:");
                scanf("%d%d", &numero1, &numero2);
                printf("subtracao: %d\n", numero1 - numero2);
                break;
            case 3:
                printf("Escolha dois valores:");
                scanf("%d%d", &numero1, &numero2);
                printf("multiplicacao: %d\n", numero1 * numero2);
                break;
            case 4:
                printf("Escolha dois valores:");
                scanf("%d%d", &numero1, &numero2);
                while(numero2 == 0){
                    printf("Nao existe divisao por 0!\nEscolha outro valor:");
                    scanf("%d", &numero2);
                }
                printf("divisao: %d\n", numero1 / numero2);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida.\nEscolha outra opcao:\n");
        }
    } while (opcao != 5);

    return 0;
}
