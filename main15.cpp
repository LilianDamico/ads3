#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    const int tamanhoVetor = 8;
    std::vector<int> vetor(tamanhoVetor);

    // Preencher o vetor com números inseridos pelo usuário
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << "Digite o elemento " << i+1 << ": ";
        std::cin >> vetor[i];
    }

    // Ordenar o vetor
    std::sort(vetor.begin(), vetor.end());

    // Imprimir o vetor ordenado
    std::cout << "Vetor ordenado: ";
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

