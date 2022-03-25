int* quick_sort(int vector[], int len_vector){
    int i = 0;
    int j = len_vector - 1;
    int groups_elements = 0;
    int swap_element = 0;

    // Recursion stopping criterion
    if(len_vector < 2){
        return 0; // exiting function
    }else{
        groups_elements = vector[len_vector / 2]; // Dividing the groups
    }

    // Making a single loop to behave like two loops
     for(i, j;; i++, j--){
        // Moving elements in vector
        while(vector[i] < groups_elements){
            i++;
        }

        // Moving elements in vector
        while (groups_elements < vector[j]){
            j--;
        }

        // Loop stop criterion
        if(i >= j){
            break;
        }else{
            // Swapping elements in vector
            swap_element = vector[i];
            vector[i] = vector[j];
            vector[j] = swap_element;
        }
    }

    //Using recursion to sort groups
    quick_sort(vector, i);
    quick_sort(vector + i, len_vector - i);
}
