/*Faça um programa que leia um numero e verifique se ele esta fora do
intervalo entre 23 e 47 enquanto o numero digitado estiver dentro
deste intervalo o programa deve permanecer em loop.*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Digite um valor no intervalo entre 23 e 47: " << endl;
    cin >> num;
    bool digito = false;
    if (num >= 23 && num <= 47)
    {
        digito = true;
        while (digito == true)
        {
            if (num >= 23 && num <= 47)
            {
                cout << "Digite um valor no intervalo entre 23 e 47: " << endl;
                cin >> num;
            }
            else
            {
                cout << "Muito Obrigado";
                exit('0');
            }
        }
    }
    else
    {
        cout << "Muito Obrigado";
    }

    return 0;
}
