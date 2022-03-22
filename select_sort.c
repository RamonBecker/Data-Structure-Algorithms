#include <stdio.h>

#define LEN_VECTOR(vector) (sizeof(vector)/sizeof((vector)[0]))

int* select_sort(int vector[], int len_vector);

int main() {
    //Disordered vector
   int vector_disordered[6] = {8, 3, 1, 42, 12, 5};
   //Applying ordering
   int len_vector = LEN_VECTOR(vector_disordered);
   int *vetor_orderly = select_sort(vector_disordered, len_vector);
   //Printing the ordered vector
   for(int i = 0; i < len_vector; i++){
	   printf("%d\n", vetor_orderly[i]);
   }

}

int* select_sort(int vector[], int len_vector){
  int smallest_element_position = 0;
  int swap_element = 0;
  //External loop to loop through the entire vector
  for(int i = 0; i < (len_vector-1); i++){
	//variable to follow the for loop always taking the smallest element
	smallest_element_position = i;
	//Inner loop to work with the next element
    for(int j = (i+1); j < len_vector; j++){
      if(vector[j] < vector[smallest_element_position]){
        smallest_element_position = j;
      }
    }
    //Where the exchange takes place
    if(i != smallest_element_position){
      swap_element = vector[i];
      vector[i] = vector[smallest_element_position];
      vector[smallest_element_position] = swap_element;
    }
  }
  return vector;
}