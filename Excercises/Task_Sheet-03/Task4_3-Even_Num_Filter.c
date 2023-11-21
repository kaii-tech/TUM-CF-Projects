#include <stdio.h>

int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[6] = {16,7,15,47,-3,0};

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        //Check if the Modulo (%) of the array element is = 0 (Even)
        if (Array[i] % 2 == 0)
            //If True (evan):
            printf("%d ", Array[i]); //Print the value 
    }

    return 0;
}