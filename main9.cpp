#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double num1, num2, num3, num4;
    
    
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    
    std::cout << "Digite o terceiro numero: ";
    std::cin >> num3;
    
    std::cout << "Digite o quarto numero: ";
    std::cin >> num4;
    
    
    double maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    if (num4 > maior) {
        maior = num4;
    }
    
    
    double menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    
    
    double media = (num1 + num2 + num3 + num4) / 4.0;
    

    std::cout << "O maior numero e: " << maior << std::endl;
    std::cout << "O menor numero e: " << menor << std::endl;
    std::cout << "A media aritmetica e: " << media << std::endl;

	
	
	
	
	return 0;
}
