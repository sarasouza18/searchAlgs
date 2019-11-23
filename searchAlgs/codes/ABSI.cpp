#include "complementos.h"
#define programa 1

//Busca sequencia iterativa;
int algBuscSeqIt (int vetor[], int Tamanho, int Procurado)
{	
	for (int i=0;i<Tamanho;i++)
	{	
		cont++;	
		if (Procurado == vetor[i]){
			return i; //Posição encontrada
		}
	}
	return -1; //Representação para o caso de não ter encontrado nada;
	
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
  
  algBuscSeqIt(vet, tam, alvo);
  gettimeofday(&final, NULL);
  tf = (double)final.tv_usec + ((double)final.tv_sec * (1000000.0));
  ti = (double)inicio.tv_usec + ((double)inicio.tv_sec * (1000000.0));
  tempo = (tf-ti)/1000000.0;
  regContador(programa, cont);
  regTempo(programa, tempo);
}