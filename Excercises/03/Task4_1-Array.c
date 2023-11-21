#include <stdio.h>

int main() {
    /* Define an Array called "Array" with 6 integers, and assiging values to its elemets*/
    int Array[6] = {16,7,15,47,-3,0};

    int i; /* Define integer variable to use in loop*/
    /* Define for loop that assigns "0" to "i", then loops until i reaches 5 (excluding 5 / i=0,i=1,i=2,i=3,i=4), incrementing i each run */
    for (i = 0; i < 5; i++) 
        /* Print all Array elements, excluding the last, with ", " afer each element */
        printf("%d, ",Array[i]); 
    printf("%d",Array[5]); /* Print the last Array element */

    return 0;
}