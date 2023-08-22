#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	double ang1, ang2, ang3;

    cout << "informe o valor do primeiro angulo: ";
    cin >> ang1;

    cout << "Informe o valor do segundo angulo: ";
    cin >> ang2;

    cout << "Informe o valor do terceiro angulo: ";
    cin >> ang3;

    
    if (ang1 + ang2 + ang3 == 180) {
        if (ang1 == ang2 && ang2 == ang3) {
            cout << "O triangulo e equilatero." << endl;
        } else if (ang1 == ang2 || ang2 == ang3 || ang1 == ang3) {
            cout << "O triangulo e isosceles." << endl;
        } else {
            cout << "O triangulo e escaleno." << endl;
        }
    } else {
        cout << "Os angulos fornecidos nao formam um triangulo valido." << endl;
    }
	return 0;
}
