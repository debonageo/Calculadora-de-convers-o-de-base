#include <iostream>

using namespace std;

int main() {
  int valor;
  bool executa = true;
  int bin[8];
  while(executa){
        cout << "**Calculadora de conversao de base DECIMAL/BINARIO BINARIO/DECIMAL**" << endl <<endl;
  cout << "Escolha a opcao desejada!" << endl << endl;
  cout << "1 Decimal para Binario" << endl;
  cout << "2 Binario para Decinal" << endl;
  cout << "0 para sair" << endl;
  cin >> valor;
  cout << "Valor digitado foi:" << valor << endl;
  if(valor == 0){
  cout << "Saindo do programa";
  executa = false;
  exit;
  }
  else{
  if(valor == 1){
  cout << "Digite o valor decimal" << endl;
  cin >> valor;
  cout << "Valor digitado:" << valor << endl;
  }
  else{
  if(valor == 2){
  cout << "Digite o valor binario" << endl;
  cin >> valor;
  cout << "Valor digitado:" << valor << endl;
  }
  else{
  cout << "Nao temos esse valor no menu" << endl;
  }
  }
  }
  }
  return 0;
}
