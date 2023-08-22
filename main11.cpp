#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int vetor[maxSize];
    int tamanho = 0;
    int ultimoNumero = 0;

    // Preencher o vetor até que o número 0 seja digitado
    while (tamanho < maxSize) {
        cout << "Digite um numero (ou 0 para sair): ";
        cin >> vetor[tamanho];

        if (vetor[tamanho] == 0) {
            break;
        }

        ultimoNumero = vetor[tamanho];
        tamanho++;
    }

    // Contar quantos números iguais ao último número (exceto 0) foram lidos
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == ultimoNumero) {
            contador++;
        }
    }

    // Imprimir o resultado
    cout << "Foram lidos " << contador << " numeros iguais ao ultimo numero digitado (" << ultimoNumero << ")." << endl;

    return 0;
}

