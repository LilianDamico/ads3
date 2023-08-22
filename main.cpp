#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c;
	std::cout << "Digite os coeficientes da equação do segundo grau:\n";     /*std é um namespace padrao usado para organizar as bibliotecas e as funcionalidades.*/
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    
    double delta = b * b - 4 * a * c;
    
    if (delta >0) {
    	double x1 = (- b + std::sqrt(delta) ) / (2 * a);
    	double x2 = (- b + std::sqrt(delta) ) / (2 * a);
    	
    	std::cout <<"As raizes são: \n";
    	std::cout <<"X1: "<< x1 << "\n";
    	std::cout <<"X2: "<< x2 << "\n";
	} else if (delta == 0) {
		double x = -b / (2 * a);
		std::cout << "A raiz é : /n";
		std::cout << "X" << x << "\n";
	}else {
		std::cout << "A equação não possui raízes reais. \n";
	}
	
	return 0;
}
