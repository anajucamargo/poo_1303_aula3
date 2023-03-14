#include <iostream>
using namespace std;
//Faz tudo funcionar
int main() {
    // Diz pra que o código será usado
    float base, altura, area;
    //O que será usado pelo usuário
    cout <<"Digite a base do triangulo: ";
    //O que será informado
    cin>> base;
    //O que será usado pelo usuário
    cout <<"Digote a altura do triangulo: ";
    //O que será informado
    cin >> altura;

    //Faz o resultado ser gerado
    area = (base * altura) / 2;
    //Mostra o resultado
    cout << "Area do triangulo é:" <<area << endl;
    
    return 0;
}
