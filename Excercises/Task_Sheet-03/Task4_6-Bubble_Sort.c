#include <stdio.h>    

/* Bubble Sort Explaiations: https://www.programiz.com/dsa/bubble-sort */
    
int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[6] = {16,7,15,47,-3,0};

    // Create a FOR loop that runs from 0 to 4 (excluding the last element) with index "i"
    for (int i = 0; i < 5; i++) {
        // Create a loop initialises j to 1 + the current index "i", then increments it and runs until the end of the Array
        for (int j = i + 1; j < 6; ++j) {
            if (Array[i] > Array[j]) {
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
    
    // Print
    for (int i = 0; i < 5; i++) {
        /* Print all Array elements, excluding the last, with ", " afer each element */
        printf("%d, ",Array[i]); 
    }
    printf("%d",Array[5]); /* Print the last Array element */

    return 0;
}