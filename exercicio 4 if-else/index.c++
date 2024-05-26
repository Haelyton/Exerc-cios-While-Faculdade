/*Faça um programa que simule a urna eletrônica.
A tela a ser apresentada deverá ser da seguinte forma:
As opções são:
1. Candidato Antônio
2. Candidato Simão
3. Fim da votação

O programa deverá ler os votos dos eleitores e, quando for digitado o
número 3, apresentar as seguintes o número de votos de cada
candidato.
Fazer dois codigos, um utilizando if e outro switch.


        ESSE CÓDIGO ESTÁ EM IF-ELSE*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int opcao;
    int antonio = 0;
    int simao = 0;

    do
    {
        cout << "-------------------------------------" << endl;
        cout << "Escolha seu candidato para a votacao: " << endl;
        cout << "-------------------------------------" << endl;
        cout << "As opcoes sao: " << endl;
        cout << "1. Candidato Antonio" << endl;
        cout << "2. Candidato Simao" << endl;
        cout << "3. Fim da votacao" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Qual e seu canditado: ";
        cin >> opcao;

        if (opcao == 1)
        {
            system("cls");
            antonio++;
            cout << "-------------------------------------" << endl;
            cout << "Voto computado" << endl;
            
        }
        else if (opcao == 2)
        {
            system("cls");
            simao++;
            cout << "-------------------------------------" << endl;
            cout << "Voto computado" << endl;
            
        }
        else if (opcao == 3)
        {
            system("cls");
            cout << "Votos de antonio: " << antonio << endl;
            cout << "Votos de simao: " << simao << endl;
            exit('0');
        }
        else
        {
            system("cls");
            cout << "-------------------------------------" << endl;
            cout << "Opcao invalida, Tente Novamente" << endl;
        }
    } while (true);
}
