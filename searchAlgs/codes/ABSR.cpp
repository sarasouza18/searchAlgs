#include "complementos.h"
#define programa 2

int algBuscSeqRec(int vetor[], int Tamanho, int Procurado)
{   
    cont++;
    if(Procurado == vetor[Tamanho - 1]){ // Verifica se o elemento foi encontrado.
        cont++;
        return Tamanho - 1; // Retorna o índice do elemento encontrado.
    }
    else if(Tamanho >= 0) // Verifica se ainda possúem elementos no vetor.
    {
        cont++;
        return algBuscSeqRec(vetor, --Tamanho, Procurado); // Chama a função busca_sequencial_rec novamente decrementando 1 na variável 'tamanho'.
    }
    else{
        cont++;
        return -1; // Retorna -1 caso não encontre o elemento no vetor[].
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
  
  algBuscSeqRec(vet, tam, alvo);
  gettimeofday(&final, NULL);
  tf = (double)final.tv_usec + ((double)final.tv_sec * (1000000.0));
  ti = (double)inicio.tv_usec + ((double)inicio.tv_sec * (1000000.0));
  tempo = (tf-ti)/1000000.0;
  regContador(programa, cont);
  regTempo(programa, tempo);
}