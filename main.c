
//Listing 18.12 Using atof() function to convert strings to type double numeric values; page 476

//NOTE: takes a character representation for a number and converts that to a number.  Stops when it encounters
//   a non-numeric character or a blank.  So, "1234cat567" would convert to the number 1234.000000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char buf[80];
    double d;

    while(1)
    {
        printf("\nEnter the string to convert (blank to exit):   ");
        gets(buf);

        if(strlen(buf) == 0)
            break;

        d = atof(buf);

        printf("The converted value is %f.", d);
    }
    return 0;

}
