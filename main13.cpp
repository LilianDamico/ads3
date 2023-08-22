#include <iostream>
#include <vector>

// Função para calcular o fatorial de um número
int calcularFatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

int main() {
    const int tamanhoVetor = 10;
    std::vector<int> vetorV(tamanhoVetor);
    std::vector<int> vetorW(tamanhoVetor);

    // Lê os elementos do vetor V
    std::cout << "Digite " << tamanhoVetor << " elementos para o vetor V:" << std::endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cin >> vetorV[i];
    }

    // Calcula os fatoriais e preenche o vetor W
    for (int i = 0; i < tamanhoVetor; ++i) {
        vetorW[i] = calcularFatorial(vetorV[i]);
    }

    // Exibe o vetor W com os fatoriais
    std::cout << "Vetor W com os fatoriais dos elementos de V:" << std::endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        std::cout << vetorW[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

