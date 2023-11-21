#include <stdio.h>

int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[6] = {16,17,15,47,-3,0};

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
    //Initialise "median" to 0 & Sorted Array
    int median = 0;
    int sortedArray[6];  

    // Use and Bubble Sort (example given by Prof, in comments bellow) to sort the Array 
    //Create a FOR loop that runs from 0 to 4 with index "i"
    for (int i = 0; i < 5; i++) {
        //Initialise the Key / Hand to the Array Element with index "i"
        int key = array[i];
        int j = i - 1;
    }




    return 0;
}


/*  Bubble Sort Example from Prof!!

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 6; ++j) {
            if (intArray[i] > intArray[j]) {
                int temp = intArray[i];
                intArray[i] = intArray[j];
                intArray[j] = temp;
            }
        }
    }
*/