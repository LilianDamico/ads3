#include <iostream>

bool bisx(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ano;

    std::cout << "Informe o ano que deseja classificar: ";
    std::cin >> ano;

    if (bisx(ano)) {
        std::cout << ano << " e um ano bissexto." << std::endl;
    } else {
        std::cout << ano << " nao e um ano bissexto." << std::endl;
    }

    return 0;
}

