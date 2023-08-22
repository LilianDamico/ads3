#include <iostream>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int comprimento, largura;
	float area;
	cout<<"Informe a medida do comprimento: \n";
	cin>>comprimento;
	cout<<"Informe a medida da largura: \n";
	cin>>largura;
	
	area = comprimento * largura;
	
	cout<<"A area do retangulo corresponde a "<<area<<" unidades de medida";
	
	return 0;
}
