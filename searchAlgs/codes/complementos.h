#ifndef COMPLEMENTOS_H
#define COMPLEMENTOS_H
int cont = 0;




#include <sys/time.h>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios;
using std::fixed;


//Cria o log do contador para cada um dos programas
void regContador(int programa, int &contador){
	ofstream arqContador;
	switch (programa){
		case 1:
			arqContador.open("contABSI.txt", ios::app);
			arqContador << contador << endl;
			arqContador.close();
			break;
		case 2:
			arqContador.open("contABSR.txt", ios::app);
			arqContador << contador << endl;
			arqContador.close();
			break;
		case 3:
			arqContador.open("contABBI.txt", ios::app);
			arqContador << contador << endl;
			arqContador.close();
			break;
		case 4:
			arqContador.open("contABBR.txt", ios::app);
			arqContador << contador << endl;
			arqContador.close();
			break;
	}
}


//Cria o log do tempo de execução de cada um dos programas
void regTempo (int programa, double tempo){
	ofstream arqTemporizador;
	arqTemporizador << fixed;
	arqTemporizador.precision(6);
	switch (programa){
		case 1:
			arqTemporizador.open("tempABSI.txt",ios::app);
			arqTemporizador << tempo<< endl;
			arqTemporizador.close();
			break;
		case 2:
			arqTemporizador.open("tempABSR.txt",ios::app);
			arqTemporizador << tempo<< endl;
			arqTemporizador.close();
			break;
		case 3:
			arqTemporizador.open("tempABBI.txt",ios::app);
			arqTemporizador << tempo<< endl;
			arqTemporizador.close();
			break;
		case 4:
			arqTemporizador.open("tempABBR.txt",ios::app);
			arqTemporizador << tempo<< endl;
			arqTemporizador.close();
			break;
	}

}


//Calcula o tempo de cada execução	
#endif