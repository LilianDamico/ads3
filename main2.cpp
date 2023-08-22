#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	double comprimento, largura;

    cout << "Digite o comprimento do retangulo: ";
    cin >> comprimento;

    cout << "Digite a largura do retangulo: ";
    cin >> largura;

    double area = comprimento * largura;

    cout << "A area do retangulo e: " << area << " unidades de medida";
	
	return 0;
}
