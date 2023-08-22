#include <iostream>

int main() {
    const int tamanho = 12;
    int vetor[tamanho];

    // Leitura dos elementos do vetor
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Digite o elemento " << i+1 << ": ";
        std::cin >> vetor[i];
    }

    int maior = vetor[0];
    int menor = vetor[0];
    int soma = 0;
    int countPares = 0;

    // Encontrar o maior, o menor, contar números pares e calcular a soma
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
        soma += vetor[i];
    }

    // Cálculo da média
    float media = static_cast<float>(soma) / tamanho;

    // Cálculo do percentual de números pares
    float percentualPares = static_cast<float>(countPares) / tamanho * 100;

    // Impressão dos resultados
    std::cout << "Maior elemento: " << maior << std::endl;
    std::cout << "Menor elemento: " << menor << std::endl;
    std::cout << "Percentual de números pares: " << percentualPares << "%" << std::endl;
    std::cout << "Média dos elementos: " << media << std::endl;

    return 0;
}


/*
static_cast é um operador em C++ que permite converter um valor de um tipo de dados para outro tipo compatível. 
Ele é usado para realizar conversões seguras e conhecidas em tempo de compilação entre tipos relacionados.
*/
