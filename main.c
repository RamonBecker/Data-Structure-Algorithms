
#include <stdio.h>
#include "select_sort.c"
#include "insert_sort.c"
#include "bubble_sort.c"

#define LEN_VECTOR(vector) (sizeof(vector)/sizeof((vector)[0]))


int main() {
    //Disordered vector
   int vector_disordered[6] = {8, 3, 1, 42, 12, 5};
   //Applying ordering
   int len_vector = LEN_VECTOR(vector_disordered);
   int *vetor_orderly = bubble_sort(vector_disordered, len_vector);
   //Printing the ordered vector
   for(int i = 0; i < len_vector; i++){
	   printf("%d\n", vetor_orderly[i]);
   }
}