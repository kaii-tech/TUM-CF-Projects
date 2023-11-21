//-- This is in C++ for whatever reason.... Thats what the prof used int the Question!!! --

#include <iostream>

//Initialize a Boolean Function that accepts the integer input "a".
bool isEven(int a) {
    // COPPIED from T4.3, Check if the Mod of a with 2 (a % 2) is equal to 0 (==0)
    if (a % 2 == 0) {
        //If True (evan):
        return(true);  // Return the Value "true"    * NOTE : it must be 'true' not 'True' or 'TRUE' (maybe 1 is ok, but im not sure) *
    }
    else {
        //If False (Odd):
        return(false); // Return the Value "false"
    }
}


int main() {
    /* Array Definetion COPIED from T4.1 */
    int Array[6] = {16,7,15,47,-3,0};

    //Loop through all array elements (directly initializing i)
    for (int i = 0; i < 6; i++) {
        int evenVerdict = isEven(Array[i]); // Initilize variable "evenVerdict" to store the answer of "isEven()" Function
        if (evenVerdict) { //if evenVerdict is 'true' 
            printf("%d ", Array[i]); //Print the value
        } 
    }
}