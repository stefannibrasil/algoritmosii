//Stéfanni Brasil
//Trabalho de Algoritmos e Programação II

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* read_array (const char*);
int* copy_array(int*, int);
void bubbleSort(int*, int);
void insertion(int*, int);
void print_array(int*, int);

int main(char* argv) {
  // Teste  entrada com 1000 numeros desordenados
  		int* array_desordenado;
      int* array_aux;
      double tempo_total, tempo_inicio, tempo_final = 0;
      int i = 0;

      array_desordenado = read_array("1000.txt");
      array_aux = copy_array(array_desordenado, 1000);

      printf("algoritmo n tempo(ms)\n");

      //bubbleSort com 1000 inteiros
      clock_t start = clock();
      bubbleSort(array_aux, 1000);
      clock_t stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("bubbleSort  1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);


      //insertion com 1000 inteiros
      start = clock();
      insertion(array_aux, 1000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("insertion  1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);

  		return  0;
  	}


  // pode testar tambem com entradas ordenadas
  // entradas invertidas que eh o pior caso.

void bubbleSort(int* array, int n){
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

void insertion(int* array, int n){
  int i, j, x;
  for(j = 1; j < n; j++){
    x = array[j];
    for(i = j-1; i >= 0 && array[i] > x; i--){
        array[i+1] = array[i];
    }
    array[i+1] = x;
  }
}
/*
int mergeSort(int array[], int p, int r){
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
      w[k++] = array[i++];
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
/*
int quickSort(int *array, int p, int r){
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

/*
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
    for (i = h + 1; i <= N; i++){
      x = a[i];
      j = i - h;
      while (j >= 1 && x < a[j]){
        a[j+h] = a[j];
        j = j - h;
      }
      a[j+h] = x;
    }
  } while (h != 1);
}
*/


int* read_array (const char* file_name) {
  FILE* file = fopen (file_name, "r");
  int i = 0;
  static int vetor[1000];

  for (i = 0; i < 1000; i++){
        fscanf(file, "%d,", &vetor[i]);
  }
  fclose (file);
  return vetor;
}

int* copy_array(int* from, int n){
  int i = 0;
  static int to[1000];

  for(i; i < n; i++){
    to[i] = from[i];
  }
  return to;
}

void print_array(int* array, int n){
  int i = 0;
  for(i; i < n ; i++){
    printf("%d\n", array[i]);
  }
}
