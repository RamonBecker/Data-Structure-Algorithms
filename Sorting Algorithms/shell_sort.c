int* shell_sort(int vector[], int len_venctor){
    // Auxiliary variable
    // h -> jumps in vector
    int h = 1;

    // Generating group size according to vector size
    while (h < len_venctor){
        h = 3 * h + 1;
    }
    //Cycling through the vector while there are groups to sort
    while(h > 1){
        // Splitting the group into 3 parts
        h /= 3;
        // Going through each group
        for(int i = h; i < len_venctor; i++){
            int swap_element = vector[i];
            int j = i - h;
            // Making the exchange
            while(j >= 0 && swap_element < vector[j]){
                vector[j + h] = vector[j];
                j -= h; 
            }
            // realiza a troca
            vector[j + h] = swap_element; 
        } 
    }
    return vector;
}