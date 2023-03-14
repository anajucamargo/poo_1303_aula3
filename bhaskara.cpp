#include <iostream>
#include <cmath>
using namespace std;
auncia o codigo
int main () {
    //diz quais variaveis seraão usadas
    float a, b, c, x1, x2, delta;
   // o usuario digita o valor de a
    cout << "digite o valor de a:";
 //  confirma o valor de a
    cin >> a;
    //o usuario digita o valor de b
    cout <<"digite  o valor de b:";
   // confirma o valor de b
    cin >> b;
    // o usuario digita o valor de c
     cout << "digite o valor de c";
   // confirma o valor de c
     cin >> c;
      //diz qual é a formula usada
      delta = pow(b, 2) - 4 * a * c;
     // diz a formula usada
      if (delta >-0){
        // calcula o x1
          x1= (-b + sqrt (delta)) / (2 * a);
        // calcula o x2 
          x2= (-b - sqrt(delta)) / (2 * a);
          // mostras as raizes
          cout <<"as raizes da equacao sao:" <<x1 << "e" << x2 <<endl;
          
          }
          // da uma outra alternativa
          else {
            //fala quando a ariz é inexistente 
    
              cout <<"a equacao nao tem raizes reais" << endl;
          }
      return 0;
}