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


        ESSE CÓDIGO ESTÁ EM SWITCH-CASE*/

#include <iostream>
using namespace std;

int main()
{
    int simao = 0;
    int antonio = 0;
    int opcao;

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

        switch (opcao)
        {
        case 1:
            system("cls");
            antonio++;
            cout << "-------------------------------------" << endl;
            cout << "Voto computado" << endl;
            break;
        case 2:
            system("cls");
            simao++;
            cout << "-------------------------------------" << endl;
            cout << "Voto computado" << endl;
            break;
        case 3:
            system("cls");
            cout << "-------------------------------------" << endl;
            cout << "Votacoes de Antonio: " << antonio << endl;
            cout << "Votacoes de Simao: " << simao << endl;
            cout << "-------------------------------------" << endl;
            exit('0');
            break;
        default:
            system("cls");
            cout << "Opcao Invalida, Tente Novamente" << endl;
            break;
        }
    } while (true);
}