#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	double bMaior, bMenor, h;

    
    cout << "Informe a medida da base maior do trapezio: ";
    cin >> bMaior;

    cout << "Informe a medida da base menor do trapezio: ";
    cin >> bMenor;

    cout << "Informe a medida da altura do trapezio: ";
    cin >> h;

    
    double area = ((bMaior + bMenor) * h) / 2;

    
    cout << "A area do trapezio e: " << area << " unidades de medida";

	
	return 0;
}
