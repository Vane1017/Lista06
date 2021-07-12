#include <iostream>

using namespace std;

int Fibonacci(int n){

    int Soma;

    if(n==0){
        return 0;
    }

    else if(n==1){
        return 1;
    }

    else{
        Soma = Fibonacci(n-1) + Fibonacci(n-2);

        return Soma;
    }
}

int main(){

    cout << "Lista 06 - Questao 01 - Letra a" << endl;

    cout << "Insira a posicao que deseja saber" << endl;

    int Posicao;
    cin >> Posicao;

    int Resultado;

    Resultado = Fibonacci(Posicao);

    cout << "Valor total:" << Resultado << endl;

    return 0;
}
