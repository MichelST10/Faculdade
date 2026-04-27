#include <iostream>
#include <math.h>
using namespace std;

calculaPreco(float valor, float taxa){
	return valor + (valor * taxa);
}

int main(){
	char opcao;
	float precoAntigo, resultado;
	cout << "insira o codigo do seu carro, S para sedan, C para conversivel e P para popular: ";
	cin >> opcao;
	cout << "agora insira o preco antigo do seu carro: ";
	cin >> precoAntigo;
	
	switch(opcao){
		case 'S':
			if(precoAntigo < 150000){
				resultado = calculaPreco(precoAntigo, 0.11);
			}else{
				resultado = calculaPreco(precoAntigo, 0.07);
			}
			break;
		
		case 'C':
			if(precoAntigo < 100000){
				resultado = calculaPreco(precoAntigo, 0.09);
			}else{
				resultado = calculaPreco(precoAntigo, 0);
			}
			break;
			
		case 'P':
			resultado = calculaPreco(precoAntigo, 0.04);
			break;
			
		default:
			resultado = calculaPreco(precoAntigo, 0.05);
			break;
	}
	
	cout << "novo preco do seu carro sera: " << resultado << endl;
	return 0;
}
