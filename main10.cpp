#include <iostream>

using namespace std;

int main() {
    int Vetor[10];
    double Inverso[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite um número inteiro positivo (ou negativo para encerrar): ";
        cin >> Vetor[i];
        
        if (Vetor[i] < 0) {
            cout << "Encerrando a leitura de números." << endl;
            break;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        Inverso[i] = -1.0 * Vetor[i];
    }
    
    cout << "Vetor inverso:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << Inverso[i] << " ";
    }
    
    return 0;
}

