#include <stdio.h>
int main() {
//Declara qual operador aritmetico vai trabalhar e a quantidade de variaveis que vai usar//
    int numero1, numero2;
    int soma;
    
//Pergunta ao Usuario os numeros e aloca na memória//
    printf("Digite o primeiro numero: ");
    scanf(" %d", &numero1);
    printf("Digite o segundo numero: ");
    scanf(" %d", &numero2);
    
//Executa a Operação Aritmética//
soma = numero1 + numero2;

//Mostra o Resultado//
printf("O resultado é %d", soma);

return 0;

}