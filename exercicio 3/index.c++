/*Faça um programa que receba uma senha formada de
quatro números inteiros, verifique se a senha está correta e,
caso não esteja, solicite novamente a senha. Se a senha
entrada for a correta, deverá ser apresentada a mensagem
“Senha Correta”, caso contrário, “Senha Incorreta”
.*/


#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


struct Senha
{
    string senha;
};
bool validarSenha(const string &senha)
{
    return (senha.length() == 4);
}


int main()
{


    Senha novaSenha;
    string senhaDigitada;
    do
    {  
        cout << "Faca o cadastro da sua senha de ate 4 digitos: " << endl;
        cin >> novaSenha.senha;


        if (!validarSenha(novaSenha.senha))
        {   system("cls");
            cout << "------------------------------------" << endl;
            cout << "Senha Incorreta" << endl;
            cout << "Senha deve conter 4 digitos" << endl;
            cout << "------------------------------------" << endl;
        }
        else
        {  
            do
            {
               


                cout << "Realize seu Login: ";
                cin >> senhaDigitada;
               
                if (senhaDigitada != novaSenha.senha){
                    system("cls");
                    cout << "------------------------------------" << endl;
                    cout << "Senha Incorreta, digite novamente" << endl;
                    cout << "------------------------------------" << endl;
                   
                }
                if (novaSenha.senha == senhaDigitada)
                {   system("cls");
                    cout<<"-----BEM-VINDO-----"<<endl;
                    cout << "Login Realizado";
                    exit('0');
                }
            } while (senhaDigitada != novaSenha.senha);
           
        }


    }


    while (true);
    return 0;
}

