//Stéfanni Brasil
//Trabalho de Algoritmos e Programação II

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

int* read_array (const char*);
int* copy_array(int*, int);
void bubbleSort(int*, int);
void insertion(int*, int);
void print_array(int*, int);
void MergeSort(int*, int);
void quickSort(int*, int, int);
void quickSortIterative (int*, int, int);
void shellSort(int*, int);

int main(char* argv) {
  		int* array_desordenado;
      int* array_aux;
      double tempo_total, tempo_inicio, tempo_final = 0;
      int i = 0;

      array_desordenado = read_array("1000000.txt");
      array_aux = copy_array(array_desordenado, 1000000);

      printf("Algoritmos 1000 tempo(ms)\n");
/*
      //bubbleSort com 1000 inteiros
      clock_t start = clock();
      bubbleSort(array_aux, 1000);
      clock_t stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("bubbleSort  1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);


      //insertion com 1000 inteiros
      start = clock();
      insertion(array_aux, 1000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("insertion  1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);

      //merge com 1000 inteiros
      start = clock();
      MergeSort(array_aux, 1000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("merge  1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);

      //quick com 1000 inteiros
      start = clock();
      quickSort(array_aux, 0, 1000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
  //    print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);

      //quick iterativo com 1000 inteiros
      start = clock();
      quickSortIterative(array_aux, 0, 1000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  iterativo 1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
  //    print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);

      //shellSort com 1000 inteiros
      start = clock();
      shellSort(array_aux, 1000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("shell sort 1000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 1000);
      array_aux = copy_array(array_desordenado, 1000);

      printf("Algoritmos 10000 tempo(ms)\n");

      array_desordenado = read_array("10000.txt");
      array_aux = copy_array(array_desordenado, 10000);

      //bubbleSort com 10000 inteiros
      start = clock();
      bubbleSort(array_aux, 10000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("bubbleSort  10000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 10000);


      //insertion com 10000 inteiros
      start = clock();
      insertion(array_aux, 10000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("insertion  10000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 10000);

      //merge com 10000 inteiros
      start = clock();
      MergeSort(array_aux, 10000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("merge  10000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 10000);

      //quick com 10000 inteiros
      start = clock();
      quickSort(array_aux, 0, 10000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  10000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 10000);

      //quick iterativo com 10000 inteiros
      start = clock();
      quickSortIterative(array_aux, 0, 10000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  iterativo 10000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
  //    print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 10000);

      //shellSort com 10000 inteiros
      start = clock();
      shellSort(array_aux, 10000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("shell sort 10000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 10000);

      printf("Algoritmos 100000 tempo(ms)\n");

      //Métodos com 100000 inteiros
      array_desordenado = read_array("100000.txt");
      array_aux = copy_array(array_desordenado, 100000);

      //merge com 100000 inteiros
      start = clock();
      MergeSort(array_aux, 100000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("merge  100000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 100000);

      //quick com 100000 inteiros
      start = clock();
      quickSort(array_aux, 0, 100000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  100000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 100000);

      //quick iterativo com 100000 inteiros
      start = clock();
      quickSortIterative(array_aux, 0, 100000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  iterativo 100000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
  //    print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 100000);

      //shellSort com 100000 inteiros
      start = clock();
      shellSort(array_aux, 100000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("shell sort 1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 100000);

      //bubbleSort com 100000 inteiros
      start = clock();
      bubbleSort(array_aux, 100000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("bubbleSort  100000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 100000);


      //insertion com 100000 inteiros
      start = clock();
      insertion(array_aux, 100000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("insertion  100000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      array_aux = copy_array(array_desordenado, 100000);
*/
  printf("Algoritmos 1000000 tempo(ms)\n");
/*
      //quick com 1000000 inteiros
      clock_t start = clock();
      quickSort(array_aux, 0, 1000000);
      clock_t stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
    //  print_array(array_aux, 10000);
      free(array_aux);
      array_aux = copy_array(array_desordenado, 1000000);

     //quick iterativo com 1000000 inteiros
      start = clock();
      quickSortIterative(array_aux, 0, 1000000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("quicksort  iterativo 1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
  //    print_array(array_aux, 10000);
      free(array_aux);
      array_aux = copy_array(array_desordenado, 1000000);

      //shellSort com 1000000 inteiros
      start = clock();
      shellSort(array_aux, 1000000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("shell sort 1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 10000);
      free(array_aux);
      array_aux = copy_array(array_desordenado, 1000000);

      //merge com 1000000 inteiros
      start = clock();
      MergeSort(array_aux, 1000000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("merge  1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //  print_array(array_aux, 10000);
      free(array_aux);
      array_aux = copy_array(array_desordenado, 1000000);

      //bubbleSort com 1000000 inteiros
      start = clock();
      bubbleSort(array_aux, 1000000);
      stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("bubbleSort  1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //print_array(array_aux, 10000);
      free(array_aux);
      array_aux = copy_array(array_desordenado, 1000000);
*/

      //insertion com 1000000 inteiros
      clock_t start = clock();
      insertion(array_aux, 1000000);
      clock_t stop = clock();
      tempo_total = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
      printf("insertion  1000000  %f\n", tempo_total);
      tempo_total = 0, start = 0, stop = 0;
      //  print_array(array_aux, 10000);
      free(array_aux);
      array_aux = copy_array(array_desordenado, 1000000);

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

void Merge(int *A, int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

// Recursive function to sort an array of integers.
void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing.

	mid = n/2;  // find the mid index.

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));

	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
  free(L);
  free(R);
}

void quickSort(int *arr, int low, int high)
{
  int pivot, i, j, temp;
  if(low < high) {
    pivot = low; // select a pivot element
    i = low;
    j = high;
    while(i < j) {
      // increment i till you get a number greater than the pivot element
      while(arr[i] <= arr[pivot] && i <= high)
        i++;
      // decrement j till you get a number less than the pivot element
      while(arr[j] > arr[pivot] && j >= low)
        j--;
      // if i < j swap the elements in locations i and j
      if(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }

    // when i >= j it means the j-th position is the correct position
    // of the pivot element, hence swap the pivot element with the
    // element in the j-th position
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    // Repeat quicksort for the two sub-arrays, one to the left of j
    // and one to the right of j
    quickSort(arr, low, j-1);
    quickSort(arr, j+1, high);
  }
}

void swap (int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function is same in both iterative and recursive*/
int partition (int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

/* A[] --> Array to be sorted,
   l  --> Starting index,
   h  --> Ending index */
void quickSortIterative (int arr[], int l, int h)
{
    // Create an auxiliary stack
    int stack[ h - l + 1 ];

    // initialize top of stack
    int top = -1;

    // push initial values of l and h to stack
    stack[ ++top ] = l;
    stack[ ++top ] = h;

    // Keep popping from stack while is not empty
    while ( top >= 0 )
    {
        // Pop h and l
        h = stack[ top-- ];
        l = stack[ top-- ];

        // Set pivot element at its correct position
        // in sorted array
        int p = partition( arr, l, h );

        // If there are elements on left side of pivot,
        // then push left side to stack
        if ( p-1 > l )
        {
            stack[ ++top ] = l;
            stack[ ++top ] = p - 1;
        }

        // If there are elements on right side of pivot,
        // then push right side to stack
        if ( p+1 < h )
        {
            stack[ ++top ] = p + 1;
            stack[ ++top ] = h;
        }
    }
}

void shellSort(int *Vetor, int tamanho)
{
   int i = (tamanho - 1) / 2;
   int chave, k, aux;

   while(i != 0)
   {
      do
      {
         chave = 1;
         for(k = 0; k < tamanho - i; ++k)
         {
            if(Vetor[k] > Vetor[k + i])
            {
               aux = Vetor[k];
               Vetor[k] = Vetor[k + i];
               Vetor[k + i] = aux;
               chave = 0;
            }
         }
      }while(chave == 0);
      i = i / 2;
   }
}

int* read_array (const char* file_name) {
  FILE* file = fopen (file_name, "r");
  int i = 0;

 int* vetor = (int*)malloc((1000000)*sizeof(int));

  for (i = 0; i < 1000000; i++){
        fscanf(file, "%d,", &vetor[i]);
  }
  fclose (file);
  return vetor;
}

int* copy_array(int* from, int n){
  int i = 0;

  int* vetor = (int*)malloc((1000000)*sizeof(int));

  for(i; i < n; i++){
    vetor[i] = from[i];
  }
  return vetor;
}

void print_array(int* array, int n){
  int i = 0;
  for(i; i < n ; i++){
    printf("%d\n", array[i]);
  }
}
