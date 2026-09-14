#include <stdio.h>



int main(){

    int num, soma = 0, i;


    for (i = 1; num != -1; i++){
        
        scanf("%d", &num);

        if (num >= 0 || num <= 255){
            
            soma += num;
            i++;

        }

        i--;
        
    }
    
    
    


    return 0;
}
