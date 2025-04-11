#include <iostream>
int main (){
	int valor =5;
	int*pValor = &valor;
	
	std::cout << "valor original: " << valor << std::endl;
	*pValor = 20;//Modifica el valor de 'valor' a traves del puntero
	std::cout << "valor monificado: "<< valor << std::endl;
	
	return 0;
}
