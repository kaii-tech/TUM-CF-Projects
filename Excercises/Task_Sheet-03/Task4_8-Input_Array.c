#include <stdio.h>

int main() {
    //Initilize an integer array with 5 elements
    int Array[5];

    printf("Enter an Array with 5 integer elements: ");
    /* input Arry with 5 elements --- 
    "%d %d" is used for the input format, this signifies an integer then a space and then an integer. 
    the & symbol informs that the induvidual integer (%d) where to be stored, for each %d respectivly. */
    scanf("%d %d %d %d %d", &Array[0], &Array[1], &Array[2], &Array[3], &Array[4]);

    //Print the array
    printf("%d %d %d %d %d\n", Array[0], Array[1], Array[2], Array[3], Array[4]);
}