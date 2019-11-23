#include "complementos.h"
#define programa 4

int algBuscBinRec(int vetor[], int Tamanho, int Procurado)
{
  cont++;
	int indice_meio = Tamanho/2;           /* índice do elemento do meio */
	int valor_meio = vetor[indice_meio];          /* valor do elemento do meio */
	if (Tamanho == 0){            /* se o arranjo está vazio */
    	return -1;               /* ... é porque não achou */
	}
	else if (Procurado == valor_meio){
    	cont++;
      return indice_meio;                              /* achou na posição i */
  	}
  	else if (Procurado < valor_meio){
  		cont++;
    	return algBuscBinRec(vetor, indice_meio, Procurado);              /* pode estar na 1a met. */
  	}
  	else if (Procurado > valor_meio){
  	  cont++; 
    	return algBuscBinRec(&vetor[indice_meio+1], Tamanho-(indice_meio+1), Procurado);
  }
}

int main ()
{ 
  double ti,tf;
  struct timeval inicio, final;
  gettimeofday(&inicio, NULL);
  double tempo;
  int tam, alvo;
  cin >> tam;
  int vet[tam]; 

  //Preenche o vetor com numeros ordenados de 0 até 'tamanho'
  for (int i = 0; i < tam; ++i)
  {
    vet[i]=i;
  }
  alvo = tam/2;
  
  algBuscBinRec(vet, tam, alvo);
  gettimeofday(&final, NULL);
  tf = (double)final.tv_usec + ((double)final.tv_sec * (1000000.0));
  ti = (double)inicio.tv_usec + ((double)inicio.tv_sec * (1000000.0));
  tempo = (tf-ti)/1000000.0;
  regContador(programa, cont);
  regTempo(programa, tempo);
}