#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char** argv) {
	
	 double lado1, lado2, lado3;
    
    
    cout << "Informe a medida do primeiro lado do triangulo: ";
    cin >> lado1;
    
    cout << "Informe a medida do segundo lado do triangulo: ";
    cin >> lado2;
    
    cout << "Informe a medida do terceiro lado do triangulo: ";
    cin >> lado3;
    
    
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        
        double s = (lado1 + lado2 + lado3) / 2.0; 
        double area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
        
        
        cout << "A area do triangulo e: " << area << " unidades de medida.";
    } else {
        cout << "Os lados informados nao formam um triangulo valido." << endl;
    }	
	
	return 0;
}
