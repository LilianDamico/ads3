#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	   int idade;

    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    if (idade >= 0 && idade <= 11) {
        cout << "Essa pessoa e uma criança." << endl;
    } else if (idade >= 12 && idade <= 17) {
        cout << "Essa pessoa e um adolescente." << endl;
    } else if (idade >= 18 && idade <= 49) {
        cout << "Essa pessoa e um adulto." << endl;
    } else {
        cout << "Essa pessoa e idosa." << endl;
    }
	
	
	
	return 0;
}
