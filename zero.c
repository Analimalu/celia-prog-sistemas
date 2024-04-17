/******************************************************************************

Oi prof, aqui é a Ana do #J-  exercício 3 em C

*******************************************************************************/
#include <stdio.h>

int main(void)
{

    int num1;

    printf("\nInforme o número: ");
    scanf ("%d",&num1);

    if (num1 > 0){
        printf ("\nO número %d é maior que zero ",num1);
    }else {
        printf("\nO número %d é menor que zero ",num1);
    }
  

    return 0;
}
