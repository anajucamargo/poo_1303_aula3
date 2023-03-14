#include <iostream>
using namespace std;
//O que faz tudo funcionar
int main() {
    //Diz o que o código fará
    float raio, area;
    //O que queremos do código
    const float PI = 3.14159;
    //O que aparece para o usuário
    cout <<"Digite a area do circulo";
    //O que será informado
    cin >> raio;
    //Processa o código
    area = PI * raio * raio;
    //Mostra o fim do código
    cout << "a area do circulo eh: " << area << endl;
    
    return 0;

}
