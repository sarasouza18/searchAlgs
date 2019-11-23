#include "complementos.h"
#define programa 3

//Função para 
int algBuscBinIt ( int vetor[], int Tamanho, int Procudado)
{
   int inferior = 0;     //Limite inferior  (o primeiro elemento do vetor em C é zero          )
   int superior = Tamanho-1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
   int meio;
   while (inferior <= superior)
   {    
      cont++;
      meio = (inferior + superior)/2;
      if (Procudado == vetor[meio]){
         return meio;
      }
      if (Procudado < vetor[meio]){
        superior = meio-1;
      }
      else{
         inferior = meio+1;
      }
   }
   return -1;   // não encontrado
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
  
  algBuscBinIt(vet, tam, alvo);
  gettimeofday(&final, NULL);
  tf = (double)final.tv_usec + ((double)final.tv_sec * (1000000.0));
  ti = (double)inicio.tv_usec + ((double)inicio.tv_sec * (1000000.0));
  tempo = (tf-ti)/1000000.0;
  regContador(programa, cont);
  regTempo(programa, tempo);
}