#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanho = 7;
    vector<double> vetor1(tamanho);
    vector<double> vetor2(tamanho);
    vector<char> operacoes(tamanho);
    vector<double> resultado(tamanho);

    // Preenchendo os vetores com dados fornecidos pelo usuário
    cout << "Digite os valores do primeiro vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    cout << "Digite os valores do segundo vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    cout << "Digite as operacoes (+, -, *, /) para cada elemento:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Operacao " << i + 1 << ": ";
        cin >> operacoes[i];
    }

    // Realizando as operações e preenchendo o vetor resultado
    for (int i = 0; i < tamanho; i++) {
        switch (operacoes[i]) {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':
                resultado[i] = vetor1[i] / vetor2[i];
                break;
            default:
                cout << "Operacao invalida para o elemento " << i + 1 << endl;
                resultado[i] = 0.0; // Valor padrão em caso de operação inválida
        }
    }

    // Imprimindo o vetor resultado
    cout << "Vetor resultado:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}

