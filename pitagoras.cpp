#include <iostream>
using namespace std;
//Faz tudo funcionar
int main() {
    // Diz pra que o código será usado
    float cateto1, cateto2, Hipotenusa;
    //O que será usado pelo usuário
    cout <<"Digite o cateto1: ";
    //O que será informado
    cin>> cateto1;
    //O que será usado pelo usuário
    cout <<"Digote o cateto2: ";
    //O que será informado
    cin >> cateto2;

    //Faz o resultado ser gerado
    Hipotenusa = (cateto1 * cateto1 + cateto2 * cateto2) ;
    //Mostra o resultado
    cout << "A hipotenusa é:" <<Hipotenusa *Hipotenusa << endl;
    
    return 0;
}