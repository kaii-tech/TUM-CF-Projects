
//---------- NOTE: Not quite sure what the question is... ---------------


#include <stdio.h>

main() {
    // Initilize an integer array with 3 elements
    int Array[3];
    //Coppied from Task 4.8
    printf("Enter an Array with 3 integer elements: ");
    scanf("%d %d %d", &Array[0], &Array[1], &Array[2]);

    // Check if the first element is equal to the third element and if the secound element is not equal to first (and by implication the third)
    if(Array[0] == Array[2] && Array[0] != Array[1]) {
        printf("yes");
    } else {
        printf("no");
    }
    

}