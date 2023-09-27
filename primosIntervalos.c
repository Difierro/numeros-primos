/*
 *erro: Exceção de ponto flutuante (imagem do núcleo gravada)
 *na função calcPrimos falta arrumar o return, pois esta dando como void
 */

#include <stdio.h>

int calcPrimos();

int main(){
    int num1, num2;
    printf("Digite o primeiro valor do intevalo: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor do intevalo: ");
    scanf("%d", &num2);

    for(int num = num1; num < num2; num++){
        if (calcPrimos(num) == 1){
            printf("%d", num);
        }
        
    }

    return 0;  
}

int calcPrimos(int num){
    
    for(int i = 0; i < num ;i++){
        if ( num % i == 0){
            return 1;
        }else{
            return 0;
        }
    }
    
}

