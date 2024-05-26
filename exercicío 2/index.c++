/*Escreva um programa em C++ que solicita 10 números ao usuário,
através de um laço while, e ao final mostre qual destes números é o
maior.*/

#include <iostream>
using namespace std;

int main()
{
    int contador = 0;
    float num, menor, maior;
    cout << "Digite 10 numeros: " << endl;
    cin >> num;
    maior = num;
    menor = num;
    while (contador < 9)
    {
        cout << "Digite 10 numeros: " << endl;
        cin >> num;

        if (maior < num)
        {
            maior = num;
        }
        if (menor > num)
        {
            menor = num;
        }
        contador++;
    }
    

    cout << "Menor numero: " << menor << endl;
    cout << "Maior numero: " << maior;

    return 0;
}