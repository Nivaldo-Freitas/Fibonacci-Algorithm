#include <iostream>

using namespace std;

int fibo(int *argv, int i, int n)
{
    //crio a condição de encerramento do algoritmo.
    if(i<n){
        // o segundo é n-1 + n-2
        argv[2] = argv[0] + argv[1];
        // atualizo os valores
        argv[0] = argv[1];
        argv[1] = argv[2];
        // incremento o contador
        i++;
        // executo a função dentro dela mesma passando os novos valores como argumento.
        fibo(argv, i, n);
    }
    // Não coloquei dentro de um else para que sejam encerradas também as funções anteriormente executadas.
    return 0;
}

int main()
{
    // precisei criar o vetor dentro do main, mas gostaria que fosse mais elegante.
    int argvector[3] = {0, 1, 0};
    //crio contador
    int i = 0;
    // crio a variavel que vai representar a n-ésima posição da cadeia de fibonacci
    // que será nossa condição para encerrar o algoritmo.
    int n = 0;
    // recebo a variavel
    cin >> n;
    //chamo a função fibo, passando como argumentos o ponteiro do vetor, o contador e a condição de encerramento
    fibo(argvector, i, n);
    return 0;
}
