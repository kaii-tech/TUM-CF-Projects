#include <stdio.h>    

/* Insertion Sort Explaiations: https://www.programiz.com/dsa/insertion-sort */
    
int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[6] = {16,7,15,47,-3,0};

    // Create a for loop with 'i' as index, starting from 1, ending at 5.
    for(int i = 1; i < 6; i++) {
        int key = Array[i];     //initilize & Assign the key / had 
        int j = i - 1; // initilize 'j' & Assign (i-1) to it

        // Compare key with each element on the left of it until an element smaller than it is found.
        while (key < Array[j] && j >= 0) { // While Loop that runs while the key is smaller than the current Array Element (Array[j]) AND j is equal to 0 or more.
            //If the loop runs; key is smaller than 'Array[j]'. Swap!
            Array[j + 1] = Array[j];
            --j; // Reduce the value of j by 1
        }
        
        // Assign the key / hand value to its sorted location
        Array[j + 1] = key;
    }

    // Print
    for (int i = 0; i < 5; i++) {
        /* Print all Array elements, excluding the last, with ", " afer each element */
        printf("%d, ",Array[i]); 
    }
    printf("%d",Array[5]); /* Print the last Array element */
    
    return 0;
}