//Stéfanni Brasil
// Trabalho de Algoritmos e Programação II

#include <stdio.h>

int main(char* argv) {

  // argv[0] entrada.txt
  //arraydesordenado = ler um arquivo de entrada com 1000 numeros desordenados
  // arrayaux = copiar(arraydesordenado)
  //pegar d1 = data atual
  //algoritmo1(arrayaux)
  //pega d2 = data atual
  // dt-diff = d2-d1
  //imprimir nome-algoritmo qtde-numeros-entrada dt-diff

  //d1 = null
  //d2 = null
  //d3 = null
  //arrayaux = null

//de novo...

  // arrayaux = copiar(arraydesordenado)
  //pegar d1 = data atual
  //algoritmo2(arrayaux)
  //pega d2 = data atual
  // dt-diff = d2-d1
  //imprimir nome-algoritmo qtde-numeros-entrada dt-diff

  //d1 = null
  //d2 = null
  //d3 = null
  //arrayaux = null

  // ... depois de passar por todos os metodos
  // trocar a entrada

  //arraydesordenado = ler outro arquivo de entrada com 1 milhao de numeros desordenados
  //etc

  // entradas com numeros aleatorios
  // caso medio

  // pode testar tambem com entradas ordenadas
  // entradas invertidas que eh o pior caso.


  // chama trabalho1.c arquivo1.txt



  bubbleSort();
}

int bubbleSort(int array[], int n){
 	int i, j, swap;

   for (i = 1; i < n-1; i++){
      for (j = 0; j < n-1; j++){
  		if(array[j] > array[j+1]){
			     swap = array[j];
  		     array[j] = array[j+1];
  	  	   array[j+1] = swap;
    	 }
   		}
	}
}
