#include <stdio.h>

int calcPrimos();

int main(){
    int num1, num2;
    printf("Digite o primeiro valor do intevalo: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor do intevalo: ");
    scanf("%d", &num2);

    for(int num = num1; num < num2; num++){
        if (calcPrimos(num) == 1){  // se for verdadeiro, ele é primo
            printf("%d \n", num);
        }
        
    }

    return 0;  
}

int calcPrimos(int num){
    if (num <= 1){
        return 0;   //o 1 e o 0 não são primos, então retornam falso 
    }

    if( (num % 2== 0) && (num > 2)){
        return 0;   // os numeros pares maiores que 2 não são primos
    }

    for(int i = 3; i < num ;i += 2){
        if ( num % i == 0){
            return 0;   //se o número foi divisível por i (qualquer valor que não seja 1 e o int num), ele não é primo
        }
    }

     return 1;
}

