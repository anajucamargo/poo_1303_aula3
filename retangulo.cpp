#include <iostream>
using namespace std;
//Faz tudo funcionar
int main() {
    // Diz pra que o código será usado
    float base, altura, area;
    //O que será usado pelo usuário
    cout <<"Digite a base do retangulo: ";
    //O que será informado
    cin>> base;
    //O que será usado pelo usuário
    cout <<"Digote a altura do retangulo: ";
    //O que será informado
    cin >> altura;

    //Faz o resultado ser gerado
    area = (base * altura) ;
    //Mostra o resultado
    cout << "Area do retangulo é:" <<area << endl;
    
    return 0;
}
