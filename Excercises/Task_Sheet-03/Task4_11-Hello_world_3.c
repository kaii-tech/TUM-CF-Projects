#include <stdio.h>
#include <string.h> // include this liberary to use strings!

int main() {
    //Initilize an empty string "name" with the size 50 (the maximum length of the string will be 50 characters and "\0" Assigns a null value (nothing) as the value)
    char name[50] = "\0";
    
    printf("Enter your First and Last Name: ");
    //Store the user input in the string name  --  "%[^\n]" tells the function to not stop taking an input until the user goes to a new line (default is a space)
    scanf("%[^\n]s", name);

    // Initilise a String "hw" with value "Hello, world and " with a maximum of 67 characters (17 + 50 + 1)
    char hw[68] = "Hello, world and ";    

    //Conactonate (add together) the 2 strings: "name" and "hw"  ---  * NOTE - The lengths of the string have to be defined it the destination string is not empty *
    strcat(hw,name); //The value of "name" will get added to hw
    strcat(hw,"!"); //Add the "!" to the end






    //------------ Bellow Code Coppied from T4.10 ---------------------

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