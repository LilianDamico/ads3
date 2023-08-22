#include <iostream>

int main() {
    const int maxElements = 10;
    int vetorOriginal[maxElements];
    int tamanhoVetor = 0;

    // Leitura dos números inteiros e positivos
    while (tamanhoVetor < maxElements) {
        int numero;
        std::cout << "Digite um número inteiro positivo (ou um número negativo para encerrar): ";
        std::cin >> numero;

        if (numero < 0) {
            break;
        }

        vetorOriginal[tamanhoVetor] = numero;
        tamanhoVetor++;
    }

    // Geração e impressão do vetor inverso
    int vetorInverso[maxElements];
    for (int i = 0; i < tamanhoVetor; i++) {
        vetorInverso[i] = 1 / static_cast<float>(vetorOriginal[i]); // Calcula o inverso
    }

    std::cout << "Vetor original: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << vetorOriginal[i] << " ";
    }

    std::cout << "\nVetor inverso: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << vetorInverso[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
