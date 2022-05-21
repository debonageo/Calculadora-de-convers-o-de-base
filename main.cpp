#include <iostream>
#include <math.h>
#include <ctype.h>
#include <typeinfo>

using namespace std;

int main()
{
    bool executa = true;
    while(executa)
    {
        int opcao, decimal, bin[8], dec;
        int binario = 0;
        int i = 0;
        int j;
        cout <<"Calculadora de Conversao de Bases"<<endl<<endl;
        cout <<"Escolha a opcao desejada"<<endl<<endl;
        cout <<"1 - Decimal/Binario"<<endl <<"2 - Binario/Decimal"<<endl <<"0 - Sair"<<endl;
        cin >> opcao;
        if (opcao == 1)
        {
            cout <<"Conversor Decimal/Binario"<<endl;
            cout <<"Digite um numero em base decimal!"<<endl;
            cin >> decimal;
            if (cin.good())
            {
                while(decimal > 0)
                {
                    bin[i] = decimal % 2;
                    decimal = decimal / 2;
                    i++;
                }

                for(j = i -1; j >= 0; j--)
                {
                    cout << bin[j];
                }
                cout <<endl<<endl;
            }
            else
            {
                cout << "Valor invalido!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
        }
        else
        {
            if(opcao == 2)
            {
                cout <<"Conversor Binario/Decimal"<<endl;
                cout <<"Digite um numero em base binaria!"<<endl;
                cin >> binario;
                dec = 0;
                if(cin.good())
                {



                for(int i = 0; binario > 0; i++)
                {
                    dec = dec + pow(2, i) * (binario % 10);
                    binario = binario / 10;
                }
                cout << dec <<endl<<endl;
                }
                else{
                    cout << "Valor invalido!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                }
            }
            else
            {
                if(opcao == 0)
                {
                    cout <<"Saindo do Programa"<<endl;
                    executa = false;
                    exit;
                }
            }
        }
    }
    return 0;
}
