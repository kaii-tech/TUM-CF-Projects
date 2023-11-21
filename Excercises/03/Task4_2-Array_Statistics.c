#include <stdio.h>

int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[6] = {16,7,15,47,-3,0};


    // --------- Find Array Maximum ----------
    //Initialise "max" to first Array element
    int max = Array[0];

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        //compare the elements
        if (Array[i] > max)
            max = Array[i];
    }


    // --------- Find Array Minimum ----------
    //Initialise "min" to first Array element
    int min = Array[0];

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        //compare the elements
        if (Array[i] < max)
            min = Array[i];
    }


    // --------- Find Array SUM ----------
    //Initialise "sum" to 0
    int sum = 0;

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        //Add the induvidual Array elements to "sum"
        sum += Array[i];
    }


    // --------- Find Array Median ----------
    
    // Use and Bubble Sort (example given by Prof) to sort the Array. Explain: https://www.programiz.com/dsa/bubble-sort
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
    // Now the Array is sorted!

    //Since the array has 6 elements, the Median is the mean of Array[i] for i=2 & i=3
    int median = (Array[2] + Array[3]) / 2;


    // --------- Find Array Mean ----------
    
    // Initialise and calculate 'mean' using 'sum'. Devide by 6.0 not 6 to trigger it to use the float/double datatype!!
    double mean = (sum / 6.0); 

    // Print all the values  (%lf is for double, %d is for int. Table for all datatypes: https://www.log2base2.com/C/basic/printing-value-of-a-variable.html)
    printf("%d, ",max);
    printf("%d, ",min);
    printf("%d, ",sum);
    printf("%d, ",median);
    printf("%lf",mean);

    return 0;
}
