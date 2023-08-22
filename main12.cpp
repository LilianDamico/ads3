#include <iostream>
#include <string>

int main() {
    // Criar um vetor de strings com 10 posi��es
    std::string vetor[10];

    // Preencher o vetor com palavras
    for (int i = 0; i < 10; ++i) {
        std::cout << "Digite a palavra " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Imprimir as palavras ao contr�rio
    std::cout << "\nPalavras ao contr�rio:\n";
    for (int i = 0; i < 10; ++i) {
        std::string palavra = vetor[i];
        std::string palavraInvertida = "";
        for (int j = palavra.length() - 1; j >= 0; --j) {
            palavraInvertida += palavra[j];
        }
        std::cout << palavraInvertida << " ";
    }

    return 0;
}

