#include <stdio.h>

#define N 256

int main(){

    unsigned char choice;
    int numeroAmostra = 2;
    int tmp1, tmp2, tmp3, result; 

   do{

        printf("Informe as amostras %d, %d %d\n", numeroAmostra - 1, numeroAmostra, numeroAmostra + 1);
        printf("Para filtra a amostra %d :", numeroAmostra);
        scanf("%d %d %d", &tmp1, &tmp2, &tmp3); 
       
        result = (tmp1 + tmp2 + tmp3) / 3;
        printf("O resultado é : %d", result); 

        printf("\nDeseja continuar o programa?\n");
        printf("1 - Sim\n");
        printf("0 - Não\n");
        printf("Informe sua escolha:");
        scanf("%hhu", &choice);

        if (numeroAmostra > N - 1){
            printf("Valor maximo alcançado");
        }
        


    numeroAmostra++;
   }while(choice ||  numeroAmostra > (N - 1)); 

    return 0;
}
