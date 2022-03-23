int* insert_sort(int vector[], int len_vector){
    int swap_element = 0;
    // Loop in vector
    for (int i = 1; i < len_vector; i++){
        int next_element_position = i;

        // Loop responsible for exchanges
        while((next_element_position != 0) && (vector[next_element_position] < vector[next_element_position - 1])){
            swap_element = vector[next_element_position];
            vector[next_element_position] = vector[next_element_position - 1];
            vector[next_element_position - 1] = swap_element;
            next_element_position--; 
        }
    }
    return vector;
}