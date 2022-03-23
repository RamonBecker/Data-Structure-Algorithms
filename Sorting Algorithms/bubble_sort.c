int* bubble_sort(int vector[], int len_vector){
    // Auxiliary variable for the next element
    int next_element = 0;
    //Loop in the outer vector
    for(int i = 0; i < len_vector; i++){
        // Loop to next vector elements
        for (int j = 0; j < (len_vector - 1); j++){
            // Elements are exchanged
            if(vector[j] > vector[j + 1]){
                next_element = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = next_element;
            }
        }
    }
    return vector;
}