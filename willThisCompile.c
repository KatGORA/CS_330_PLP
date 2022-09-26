#include <stdio.h>
int main(){
    int x = 5 + 6;
    printf("%i \n", x);
    
}

    /* example of incorrect arithmatic that does not compile
     x = "5" + 6
     x needs to be assigned a data type
    5 is read in as a char or string and can't be added 
    to 6 since it is read in as an int or digit.

    to make this compile one should...
    assign x to be an int and remove the quotations around 5 and end with semicolons as all statments in C end with semicolons

    like so: int x = 5 + 6; 
    
*/