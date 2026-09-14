#include <stdio.h>



int main(){

    unsigned char intensidade;
    unsigned char min = 0, max = 0, choice;


    do{

        printf("Informe o valor de intensidade do pixel:");
        scanf("%hhu", &intensidade);

        if (intensidade > max){
            min = max;
            max = intensidade;
            
        }
        if (intensidade < min){
            min = intensidade;
        }
        
        

        
        printf("\nDeseja adicionar mais valores de intensidade?\n");
        printf("1 - Sim\n");
        printf("0 - Não\n");
        printf("Informe sua escolha:");
        scanf("%hhu", &choice);

    } while (choice);

    printf("Valores : %hhu ate %hhu :", min, max);

    do{

        printf("Escolha o valor a ser normalizado");
        scanf("%hhu", &intensidade);

        if(intensidade > max || intensidade < min){
            printf("Valor invalido, deve ser entre %hhu e %hhu", min, max);
            continue;
        }

        printf(" O valor normalizado é : %hhu", (intensidade - min) /(max - min));

        printf("\nDeseja continuar o programa?\n");
        printf("1 - Sim\n");
        printf("0 - Não\n");
        printf("Informe sua escolha:");
        scanf("%hhu", &choice);

    } while (choice);
     
        

    


    return 0;
}
