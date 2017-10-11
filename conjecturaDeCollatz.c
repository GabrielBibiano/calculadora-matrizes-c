# include <stdio.h>

// Função responsável por aplicar a conjectura e retornar a quantidade de ciclos
int verificaQtdCiclo( int n ){
    int count = 1;
    while( n != 1 ){
        if( n % 2 != 0 )
            n = 3 * n + 1;
        else
            n = n / 2;
        count++;
    }
    return count;
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Quantidade de vezes que o ciclo foi chamado: %d \n", verificaQtdCiclo(n));
} 