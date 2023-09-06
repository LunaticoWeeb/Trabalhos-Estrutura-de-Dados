#include <stdio.h>

float media(float *notas, int n);

int main(){
    //vetor notas da turma:
    float notas[] = {6.0, 7.2, 2.2, 2.4, 5, 6.5, 7.5, 3.5, 9.7, 10.0};
    int n = sizeof(notas)/sizeof(float);

    printf("Média da turma: %.2f\n", media(notas, n));

    return 0;
}

float media(float *notas, int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }
    return soma/n;
}