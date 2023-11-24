#include <stdio.h>

int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[7] = {16,7,15,47,-3,0};

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        int prime = 1; //Initilises true (1) to variable prime (It is a prime by default and needs to be disproven)
        int divisor = 2; //Initilize the Divisor to 2 (not 0 or 1, otherwise all numbers will have a factor)

        //Check if the Array element is less than or equal to 0 (not prime)
        if(Array[i] <= 0){
            //number is <=0
            prime = 0;
        } else {
            //Check if Array element is greater than 3 (1,2,3 are Prime)
            if(Array[i] > 3) {
                // While the number is still assumed to be prime and the divisor is less than half the value of the array element:
                while(prime == 1 && divisor < Array[i]/2) {
                    //check if the Array element has the factor "divisor"; the mod of Array[i] and divisor should be = 0
                    if(Array[i] % divisor == 0) {
                        // Set prime to false (a factor has been found)
                        prime = 0;
                    } 
                    divisor++; //increment the divisor
                }
            } 
        }

        // If prime == 1 then print it.
        if(prime == 1) {
            printf("%d ", Array[i]);
        }
    }

}