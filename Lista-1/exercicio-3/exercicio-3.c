#include <stdio.h>

void media(float *notas, int n);

int main(){
    //Vetor notas da turma:
    float notas[] = {6.0, 7.2, 2.2, 2.4, 5, 6.5, 7.5, 3.5, 9.7, 10.0};
    int n = sizeof(notas)/sizeof(float); //Tamanho do vetor notas

    media(notas, n);

    return 0;
}

void media(float *notas, int n){
    float soma = 0;

    //Soma todas as notas:
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }

    //Retorna a média:
    printf("Media: %.2f\n", soma/n);
}