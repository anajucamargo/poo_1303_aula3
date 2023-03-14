#include <iostream>
using namespace std;
//Faz tudo funcionar
int main() {
    // Diz pra que o código será usado
    float cateto1, cateto2, area;
    //O que será usado pelo usuário
    cout <<"Digite o cateto1 do triangulo retangulo: ";
    //O que será informado
    cin>> cateto1;
    //O que será usado pelo usuário
    cout <<"Digote ocateto2 do triangulo retangulo: ";
    //O que será informado
    cin >> cateto2;

    //Faz o resultado ser gerado
    area = (cateto1 * cateto2) / 2 ;
    //Mostra o resultado
    cout << "Area do triangulo retangulo é:" <<area << endl;
    
    return 0;
}