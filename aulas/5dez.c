#include <stdlib.h>
#include <stdio.h>

int main(void){

    int tamanho = 5, contador;
    // criando um ponteiro que receberá o endereço do primeiro elemento do vetor
    int *vetor = malloc(tamanho*sizeof(int));

    /*
    para forçar o computador a gerar um edereço de int (ou o tipo que será guardado, utiliza-se um cast)

    int *vetor = (int *) malloc(3*sizeof(int));

    */

    /*
    =============== EXEMPLO ======================================  

    vetor -> endereço do primeiro elemento (como se fosse &vetor[0])
    vetor + 1-> endereço do segundo elemento (como se fosse &vetor[1])
    vetor + 2-> endereço do terceiro elemento (como se fosse &vetor[2])

    ASSIM, PARA OBTER O CONTEUDO:

    *(vetor) -> conteudo do primeiro elemento
    *(vetor +1) -> conteudo do segundo elemento
    *(vetor +2) -> conteudo do terceiro elemento
    */

    if (vetor == NULL){
        printf("Erro na alocação de memória.");
        exit(1);
    }
    else{
        printf("Alocação bem sucedida");
    }

    for(contador = 0; contador < tamanho; contador++){
        printf("\nDigite o valor %d do vetor: ", contador);
        scanf("%d", vetor+contador); 
        // ou scanf("%d", &vetor[contador]);
    }

    // liberando a memória, uma vez que não será mais utilizado
    free(vetor);
    return 0;
}