//Stéfanni Brasil
// Trabalho de Algoritmos e Programação II

#include <stdio.h>
#include <time.h>

int main(char* argv) {
  // lendo arquivo de entrada com 1000 numeros desordenados
  		FILE *ptr_file;
  		int tempo_total, tempo_inicio, tempo_final = 0;

  		ptr_file = fopen("1000.txt", "r");

  		if (!ptr_file)
  			exit(-1);
  // copiando os dados para outra aray
      for (i = 0; i < 1000; i++) {
        array_aux[i] = ptr_file[i];
      }
      //inicio do relogio
      clock_t start = clock();
      bubbleSort(1000.txt);
      clock_t stop = clock();
      //fechando arquivo após final da ordenação
      fclose(ptr_file);
      double tempo_total = (double)(tempo_final - tempo_inicio) * 1000.0 / CLOCKS_PER_SEC;
      printf("Tempo executado com BublleSort com 1000 inteiros: %f", tempo_total);

      tempo_total = 0, tempo_inicio = 0, tempo_final = 0, array_aux = 0;
  		return  0;
  	}

TODO:

// comentar códigos, principalmente merge, quick e shellsort
// fazer versão iterativa do quicksort
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

int insertion(int array[], int n){
  int i, j, x;
  for(j = 1; j < n; j++){
    x = array[j];
    for(i = j-1; i >= 0 && array[i] > x; i--){
        array[i+1] = array[i];
    }
    array[i+1] = x;
  }
}

int mergeSort(int p, int r, int array[]){
  if(p < r-1){
    int q = (p + r)/2;
    mergeSort(p, q, array);
    mergeSort(q, r, array);
    merge(p, q, r, array);
  }
}

void merge(int p, int q, int r, int array[]){
  int i, j, k, *w;
  w = malloc((r-p) * sizeof(int));
  i = p; j = q; k = 0;
  while(i < q && j < r){
    if (array[i] <= array[j])
      w[k++] = array[i++]
    else
      w[k++] = array[j++];
  }
  while(i < q)
    w[k++] = array[i++];
  while(j < r)
    w[k++] = array[j++];

  for(i = p; i < r; i++)
    array[i] = w[i-p];
  free(w);
}

quickSort(int p, int r, int array[]){
  int j;
  if(p < r){
    j = partition(p, r, array);
    quickSort(p, j-1, array);
    quickSort(j+1, r, array);
  }
}

int partition(int p, int r, int array[]){
  int c, j, k, t;
  c = array[r]; j = p;
  for(k = p; k < r; k++){
    if(array[k] <= c){
      t = array[j], array[j] = array[k], array[k] = t;
      j++;
    }
    array[r] = array[j], array[j] = c;
    return j;
  }
}


void shellsort(int array[], int n) {
  const int k = 2;
  int i, j, h;
  item x;
  h = 1;
  do {
    h = k * h + 1;
  } while (h <= N);
  do
  { h = h / k;
    for (i = h + 1; i <= N; i++)
    { x = a[i];
      j = i - h;
      while (j >= 1 && x < a[j])
      { a[j+h] = a[j];
        j = j - h;
      }
      a[j+h] = x;
    }
  } while (h != 1);
}
