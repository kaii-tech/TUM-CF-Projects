#include <stdio.h>
#include <string.h> // include this liberary to use strings!

int main() {
    // Initilise a String "hw" with value "Hello, world!"
    char hw[] = "Hello, world!";

    //Find the length of the String
    int str_length = strlen(hw);
    //printf("%d",str_length);


    //--------Line 1---------
    printf("%s","+-"); //Print the first 2 characters

    //Create a loop to print all the "-"s above the string
    for(int i = 0; i < str_length; i++) {
        printf("%s","-");
    }

    printf("%s","-+\n"); //Print the last 2 characters and go to the next line

    //--------Line 2----------
    printf("| %s",hw); //Print the first 2 characters and then the "hw" string
    printf("%s"," |\n"); //Print the last 2 characters and go to the next line

    //--------Line 3---------- (Same as Line 1)
    printf("%s","+-"); //Print the first 2 characters

    //Create a loop to print all the "-"s bellow the string
    for(int i = 0; i < str_length; i++) {
        printf("%s","-");
    }
    printf("%s","-+"); //Print the last 2 characters


    return 0;
}