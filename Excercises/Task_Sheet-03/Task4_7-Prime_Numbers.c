#include <stdio.h>

int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[7] = {16,7,15,47,-3,0};

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        int factor = 0; //Initilises false (0) to variable factor (no factors found)
        int divisor = 2; //Initilize the Divisor to 2 (not 0 or 1, otherwise all numbers will have a factor)

        //Check if the Array element is less than or equal to 0 (not prime)
        if(Array[i] <= 0){
            //number is <=0
            factor = 1;
        } else {
            //Check if Array element is greater than 3 (1,2,3 are Prime)
            if(Array[i] > 3) {
                // While no factors are found and the divisor is less than half the value of the array element:
                while(factor == 0 && divisor < Array[i]/2) {
                    //check if the Array element has the factor "divisor"; the mod of Array[i] and divisor should be = 0
                    if(Array[i] % divisor == 0) {
                        // Set factor to true (a factor has been found)
                        factor = 1;
                    } 
                    divisor++; //increment the divisor
                }
            } 
        }
        

        if(factor == 0) {
            printf("%d ", Array[i]);
        }
    }

}