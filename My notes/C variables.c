#include <stdio.h>

/* In C, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes */

/*
//this is a declaration for int

int thisisanumber;

//this is assigning a value for the variable

int thisisanumber = 69;

*/

/*
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

*/

#include <stdio.h>

int main(){
    int thisisnumber = 69;
    float floaternumber = 69.9;
    char thisisfunniword = 'E';

    printf("this funi number, namely %d, is funi. this decimal %f is also funi. this letter, %c is also funi \n", thisisnumber, floaternumber, thisisfunniword);
    printf("%c", thisisfunniword);
    return 0;
}

// changging values to make funi

#include <stdio.h>

int main(){
int myfuninum = 69;

int myfuniothernum = 420;

// assigning the goofy value of myfuniothernum  to myfuninum
	myfuninum = myfuniothernum;

// myfuninum is now 420, instead of 69

	printf("%d", myfuninum);
	return 0;
}

//you can also use this to make mEthAmATicS, aka additions
// To add a funi variable to another funi variable, you can use the + operator to add funi variables:
//use int sum to add, duh

#include <stdio.h>

int main(){

    int numerouno = 1;
    int numerodos = 2;
    float numerotreswithdecimals = 10.55474;

    int sum = numerouno + numerodos + numerotreswithdecimals;

    printf("%d", sum);
    return 0;
}

// you can also declare multiple variables under the same data type if you're lazy

#include <stdio.h>

int main(){

    int numerouno = 1, numerodos = 2;

    printf("%d", numerouno + numerodos);
    return 0;
}

//you can also use the same value on different variables on the same data type 

#include <stdio.h>

int main(){

    int numerouno, numerodos, numerotres;
    numerouno = numerodos = numerotres = 69;

    printf("%d", numerouno + numerodos + numerotres);
    return 0;
}

/* 
All C variables must be identified with unique names in order to not cause conflicts/confusion.

Unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume). (thank u gpt)

tldr use descriptive name to retain the readability of the code and making it easier to maintain

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names

*/

//here's a funi account example

#include <stdio.h>

int main(void){

    int skibidiID = 69420;
    int skibidiaccAGEyear = 6;
    float skibidipoints = 15.69520;
    char skibidistylerank = 'A';

    printf("Your Account ID is %d \n", skibidiID);
    printf("Your Account is %d years old \n", skibidiaccAGEyear);
    printf("You have '%f' points \n", skibidipoints);
    printf("Your style rank is %c. \n", skibidistylerank);
    return 0;

}

//you can also use this to make more mAtH, this one is finding the areA

#include <stdio.h>

int main(void){

    int length = 5;
    int width = 10;
    int area;

    area = length * width;

    printf("The Area is %d square meters, like ur mom", area);
    return 0;

}

/* 
C Data types becuz funi, totes not stolen

Data Type	Size	            Description	                                                                                           Example
int	        2 or 4 bytes	    Stores whole numbers, without decimals	                                                                1
float	    4 bytes	            Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
double	    8 bytes	            Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
char	    1 byte	            Stores a single character/letter/number, or ASCII values	                                            'A'


Format Specifier	Data Type	
%d or %i	        int	
%f or %F	        float	
%lf	                double	
%c	                char	
%s	                Used for strings (text)

_totallynotcopiednotes_
*/

// You can use the funi char data type to generate ascii text, big letter A is 65 up to 90 in decimal
#include <stdio.h>

int main(void){

    char d = 68, i = 73, c = 67, k = 75;

    printf("%c", d);
    printf("%c", i);
    printf("%c", c);
    printf("%c", k);
    return 0;
    //theoretically there's a cleaner code for this, but tis an example dont worry fr
}

//alt version
#include <stdio.h>

int main(void){

    char d = 68, i = 73, c = 67, k = 75;

    printf("%c%c%c%c", d, i, c, k);
    //also the funi %c will follow the series on how its called upon on the next part
    return 0;
    //clEaNeR
}

/*

Numeric Types

Use int when you need to store a whole number without decimals, like 35 or 1000, 
and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.

eg.

int myNum = 6920;
printf("%d", myNum);

float myNum = 4.25;
printf("%f", myNum);

double myNum = 69.99;
printf("%lf", myNum);

The precision of a floating point value indicates how many digits the value can have after the decimal point. 
The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. 
Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float

*/

//floating numbers can be a scientific number and so you can use the E for power of 10

#include <stdio.h>

int main(void){
float f1 = 35e3;
double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf", d1);
    return 0;

}

//a trick you can use is to add a .# to indicate how many numbers can be printed after decimal point
//add the .# before the data type thingimabober, leave the # as blank if you dont want decimal to get printed
//reuse code becuz funi for example

#include <stdio.h>

int main(void){
float f1 = 35e3, f2 = 36e4;
double d1 = 12E4;

    printf("%.2f\n", f1);
    printf("%.1f\n", f1);
    printf("%.lf", d1);
    return 0;

}

//you can use the sizeof to determine the size of a specific data type in ur code
//%lu refers to long unsigned integer and its used here because apparantely and i quote

// "Note that we use the %lu format specifer to print the result, instead of %d. 
// It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), 
// instead of int (%d). On some computers it might work with %d, but it is safer to use %lu."


#include <stdio.h>

int main(void){

int myInt;
float myFloat;
double myDouble;
char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    return 0;

}

//an example of using different data types for funi

#include <stdio.h>

int main(void){

int footsockpairs = 50;
float footsockcost = 70.99;
float total_cost = footsockpairs * footsockcost;
char currency = '₱';

    printf("Amount of pairs: %d\n", footsockpairs);
    printf("Cost per item: %c%.2f \n", currency, footsockcost);
    printf("Total cost = %c%.2f \n",currency, total_cost);
    return 0;
}

//type conversions 
/*

there's two types of conversions, implicit and explicit
imp is auto, ex is manual
using manual conversion is more preferable as it can specify the data value you wanted

eg. of implicit conversion 

// Automatic conversion: int to float
float myFloat = 9;

printf("%f", myFloat); //  it prints 9.000000 and this could be bad if you want specific output

// Automatic conversion: float to int
int myInt = 9.99;

printf("%d", myInt); // it prints 9 instead of 9.99 since its noted as int instead of float

*/

//explicit conversion is done by placing () and then inserting the preferred data type in front of the data value

#include <stdio.h>

int main(void){

// Manual conversion: int to float
float sum = (float) 5 / 2;

printf("%f", sum); // this prints 2.500000
return 0;


}

//you can use the %.1f or any variation if you wanna remove the extra zero decimals

#include <stdio.h>

int main(void){

// Manual conversion: int to float
float sum = (float) 5 / 2;

printf("%.1f", sum); // this prints 2.5
return 0;

}


