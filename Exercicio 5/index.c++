/*Faça um algoritmo que leia as 4 notas de um aluno e calcule a sua
média anual ponderada, com o peso:
1, 3, 4 e 5, respectivamente.

Se a nota obtida for entre 7 a 10 está aprovado;
Se a nota obtiva for entre 4 e 6.9 em recuperação;
Se é menor que 4 reprovado.
Ao final pergunte se o usuário quer calcular uma nova média.*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

string decisao;
int main()
{
    double nota1, nota2, nota3, nota4;
    int peso1 = 1, peso2 = 3, peso3 = 4, peso4 = 5;
    string nomeAluno;
    double media;

    do
    {
        system("cls");
        cout << "Digite o nome do Aluno: " << endl;
        getline(cin, nomeAluno);
        cout << "----------------------------------------" << endl;
        do
        {
            cout << "Calcule a media ponderada do aluno: " << endl;
            cout << "----------------------------------------" << endl;
            cout << "Nota 1: " << endl;
            cin >> nota1;
            cout << "Nota 2: " << endl;
            cin >> nota2;
            cout << "Nota 3: " << endl;
            cin >> nota3;
            cout << "Nota 4: " << endl;
            cin >> nota4;

            media = (((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) + (nota4 * peso4)) / (peso1 + peso2 + peso3 + peso4));
            system("cls");
            cin.ignore();
            if (media >= 0 && media <= 100)
            {
                cout << "----------------------------------------" << endl;
                cout << "A media do aluno " << nomeAluno << ": " << setprecision(2) << fixed << media << endl;
                if (media < 40)
                {
                    cout << "Status: Aluno Reprovado" << endl;
                    cout << "----------------------------------------" << endl;
                }
                else if (media >= 70 && media <= 100)
                {
                    cout << "Status: Aluno Aprovado" << endl;
                    cout << "----------------------------------------" << endl;
                }
                else if (media >= 40 && media < 70)
                {
                    cout << "Status: Aluno ficou de Recuperacao" << endl;
                    cout << "----------------------------------------" << endl;
                }
            }
            else
            {
                cout << "Nota Invalida, Digite Novamente" << endl;
                cout << "----------------------------------------" << endl;
            }
        } while (media < 0 || media > 100);
        cout << "Deseja calcular a nota de outro Aluno? (sim/nao)" << endl;
        cin >> decisao;
        cin.ignore();
        if (decisao == "nao" || decisao == "Nao")
        {
            cout << "Saindo...";
            exit('0');
        }
    }

    while (decisao == "sim" || decisao == "Sim");
    return 0;
}