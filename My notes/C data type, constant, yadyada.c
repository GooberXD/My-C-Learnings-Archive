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

// you can use this funi tricc to specify output value, we dont want to have iNaCCurAcIeS

#include <stdio.h>

int main(void){

int maxScore = 250;
int studentScore = 87;

float StudentScorePercentage = (float) studentScore / maxScore  * 100.0;

printf("Your score is %.2f percent, do better next time nerd", StudentScorePercentage);
return 0;

}

/*
CONSTANTS

Use the keyword const
This will declare the variable as "constant", which means unchangeable and read-only, makes it convenient fr

const int numero = 69;  // numero will always be 69 
numero = 10;  // it prints "error: assignment of read-only variable 'numero'"

declare a variable where it's unlikely to change, fr fr

also, when you declare a variable, it must be assigned with a value,

const int skibidirizz = 69;

you cannot pull a:

const int skibidirizz;
skibidirizz = 69;

as that is a big no no

according to my soUrCes, when using a const, you should always UPPERCASE the variable for readability
eg.
const in SKIBIDIRIZZ = 69;

*/

#include <stdio.h>

int main(void){

const int IDIDTHIS2URMOM = 69;
const int MANYTIMES = 20691;

printf("I %d'd to your mom %d times, get lost kiD", IDIDTHIS2URMOM, MANYTIMES);
return 0;

}

/*
ARITHMETIC OPERATORS
they're used to do math, its in the name
this is a funi table for reference

Operator	Name	            Description	                                 Example	
+	        Addition	        Adds together two values	                 x + y	
-	        Subtraction	        Subtracts one value from another	         x - y	
*	        Multiplication	    Multiplies two values	                     x * y	
/	        Division	        Divides one value by another	             x / y	
%	        Modulus	            Returns the division remainder	             x % y	
++	        Increment	        Increases the value of a variable by 1       ++x	
--	        Decrement	        Decreases the value of a variable by 1	     --x

*/
//eg

#include <stdio.h>

int main(void){

int skibiter = 69;
int skiber = 500;

int bothal = ++skibiter + skiber;

printf("The number is %d", bothal);
return 0; //should print 570 cuz of ++ before skibiter

}

/*

ASSIGNMENT OPERATORS

Assignment operators are used to assign le values to variables.

Operator	Example	      Same As	      Explanation
=	        x = 5	      x = 5	          This simply assigns the value 5 to the variable x.
+=	        x += 3	      x = x + 3	      It adds 3 to the current value of x and then assigns the result back to x.
-=	        x -= 3	      x = x - 3	      It subtracts 3 from the current value of x and then assigns the result back to x.
*=	        x *= 3	      x = x * 3	      It multiplies the current value of x by 3 and assigns the result back to x.
/=	        x /= 3	      x = x / 3	      It divides the current value of x by 3 and assigns the result back to x.
%=	        x %= 3	      x = x % 3	      It computes the remainder of x divided by 3 and assigns the result back to x.
&=	        x &= 3	      x = x & 3	      It performs a bitwise AND operation between the current value of x and 3, then assigns the result back to x.
|=	        x |= 3	      x = x | 3	      It performs a bitwise OR operation between the current value of x and 3, then assigns the result back to x.
^=	        x ^= 3	      x = x ^ 3	      It performs a bitwise XOR operation between the current value of x and 3, then assigns the result back to x
>>=	        x >>= 3	      x = x >> 3	  It shifts the bits of x to the right by 3 positions and assigns the result back to x.                                                                                                                                                     
                                          This effectively divides x by 2^3 (or 8) and assigns the result to x.
<<=	        x <<= 3	      x = x << 3      It shifts the bits of x to the left by 3 positions and assigns the result back to x. 
                                          This effectively multiplies x by 2^3 (or 8) and assigns the result to x.

*/

#include <stdio.h>

int main(void){
// this is my goofy idea on how to demonstrate how this all works fr
int x = 5;


x = 5;
printf("initial x1 = %d\n", x); //should prints 5

x = 5;
x += 5;
printf("x2 = %d\n", x); //should prints 10

x = 5;
x -= 5;
printf("x3 = %d\n", x); //should prints 0

x = 5;
x *= 5;
printf("x4 = %d\n", x); //should prints 25

x = 5;
x /= 5;
printf("x5 = %d\n", x); //should prints 1

x = 5;
x %= 5;
printf("x6 = %d\n", x); //should prints 0 due to 5 divide 5 having no remainder

x = 5;
x &= 10;
printf("x7 = %d\n", x); //should prints 0 cuz 5 & 10 = 0 (0101 & 1010 = 0000)

x = 5;
x &= 3;
printf("x72 = %d\n", x); //should prints cuz 5 & 3 = 1 (0101 & 0011 = 0001)

x = 5;
x |= 10;
printf("x8 = %d\n", x); //should prints 15 cuz 5 | 10 = 15 (0101 | 1010 = 1111)

x = 5;
x ^= 10;
printf("x9 = %d\n", x); //should prints 15 cuz 5 ^ 10 = 15 (0101 ^ 1010 = 1111)

x = 5;
x >>= 10;
printf("x10 = %d\n", x); //should prints 0 cuz shifting 5 (0000 0101) right by 10 bits results in 0

x = 5;
x <<= 10;
printf("x11 = %d\n", x); //should prints 5120 cuz shifting 5 (0000 0101) left by 10 bits results in 5120 (1010000000000 in binary)
return 0;
}




/*
COMPARISON OPERATOR
Comparison operators are used to compare two values (or variables). 
This is important in programming, because it helps us to find answers and make decisions.

The return value of a comparison is either 1 or 0, which means true (1) or false (0) aka boolean. 

Operator	Name	                     Example	  Description	
==	        Equal to	                 x == y	      Returns 1 if the values are equal	 
!=	        Not equal	                 x != y	      Returns 1 if the values are not equal	 
>	        Greater than	             x > y	      Returns 1 if the first value is greater than the second value	 
<	        Less than	                 x < y	      Returns 1 if the first value is less than the second value	 
>=	        Greater than or equal to	 x >= y	      Returns 1 if the first value is greater than, or equal to, the second value	 
<=	        Less than or equal to	     x <= y	      Returns 1 if the first value is less than, or equal to, the second value	 

*/

#include <stdio.h>

int main(void){

int x = 7, y = 12;

    printf("x == y: %d\n", x == y);

    printf("x != y: %d\n", x != y);

    printf("x > y: %d\n", x > y);

    printf("x < y: %d\n", x < y);

    printf("x >= y: %d\n", x >= y);

    printf("x <= y: %d\n", x <= y);

    return 0;

}




/*
Logical Operators
You can also test for true or false values with logical operators.

Logical operators are used to determine the logic between variables or values, by combining multiple conditions:

Operator	   Name	     Example	               Description	
&& 	           AND	     x < 5 &&  x < 10	       Returns 1 if both statements are true	 
|| 	           OR	     x < 5 || x < 4	           Returns 1 if one of the statements is true	
!	           NOT	     !(x < 5 && x < 10)	       Reverse the result, returns 0 if the result is 1

*/
//example

#include <stdio.h>

int main(void){

int x = 5, y = 14; //modify le value to see diff results

    if(x < 10 && y < 15) {
        printf("true");}

        else {
        printf("false");}

    return 0;

}


/*
C BOOLEANS RAHHH

in c, bool data type exists
essentially represents if something is true or false

you need to import #include <stdbool.h> to able to use boolean
1 = true
0 = false

bools are returned as integers so you use %d to print them


*/

//examples
//eg 1
#include <stdbool.h>
#include <stdio.h>

int main(){

int xbool;
bool xboolgreat5;

    printf("Enter a number to see if the number is greater than 5:");
    scanf("%d", &xbool);

    xboolgreat5 = xbool > 5;

    if(xboolgreat5) {
        printf("This number is bigger than 5"); }
    else {
        printf("nuh uh, not bigger than 5");
    }

    return 0;

}

//eg 2

#include <stdbool.h>
#include <stdio.h>

int main(){

int xboolage;
bool xboolegalage;

    printf("Enter your age to verify if you can access this very hot 18+ site:");
    scanf("%d", &xboolage);

    xboolegalage = xboolage >= 18;

    if(xboolegalage) {
        printf("You may come in, enjoy the fanarts"); }
    else {
        printf("nuh uh, why u menor de edad");
    }

    return 0;

}

/*
C IF ELSE-ing
tldr conditional programming, yipeee

Less than: 
a < b

Less than or equal to: 
a <= b

Greater than: 
a > b

Greater than or equal to: 
a >= b

Equal to:
a == b

Not Equal to: 
a != b


le conditional statements:
Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed


*/

//if example

#include <stdio.h>

int x = 50;
int y = 10;
int main(){
if (x>y) {
  printf("Hello World");
} 
return 0;
}

//else example

#include <stdio.h>

int money = 69; //change numero to 100 or more and itll print paid debt
int main(){
    if (money >= 100) {
    printf("You paid your debt :D");
    } 
    else {printf("sKIBIDI death for you");
    }
return 0;
}

//else if example

#include <stdio.h>

int moneydebt;
int main(){
    printf("How much money do you have hmmmm? ");
    scanf("%d", &moneydebt);
        if (moneydebt > 100) {
        printf("You paid your debt :D with some change");
        } 
        else if (moneydebt == 100){
        printf("You paid your debt, ur free");
        }
        else {
        printf("bro how are you broke?");    
        }
return 0;
}

/*

there's also ternary operators that goes like:

int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");
              this is true          this is false

tldr just a cleaner if else

 o b s e r v e 

*/

#include <stdio.h>

int ageurmom;

int main(){
    printf("How old is your mom? ");
    scanf("%d", &ageurmom);

    (ageurmom >= 18) ? printf("I humped your mom %d times", ageurmom) : printf("ur mom's too young bro");

return 0;

}

//finding out a number is even or odd

#include <Stdio.h>

int myNume;
int main(){

    printf("Find out if your number is even or odd :D: ");
    scanf("%d", &myNume);
    if (myNume % 2 == 0) {
    printf("%d is even.", myNume);
    } else {
    printf("%d is odd.", myNume);
    }

return 0;

}

/*

C Switches yipeee

instead of spamming if elses, you can just use switches (yandev moment)

default is used as default (duh) if there is no case match
oBSeRvEe


*/
#include <stdio.h>

int main(){

    int numSus;

    printf("What is your chosen number? ");
    scanf("%d", &numSus);

    switch (numSus) {
    case 69:
        printf("Nice");
        break;
    case 420:
        printf("Weed day haha funi");
        break;
    default:
        printf("Numero %d, nice number bro", numSus);
    }

    return 0;
}

/*
WHILE LOOP

tldr basically executes a block of code until a condition is met

while essentially loops around the code so long as the specified condition is true

*/

//eg

#include <stdio.h>

int num = 0;

    int main(){
    while (num <= 5) {
    printf("%d\n", num); //should print 0 1 2 3 4 5
    num++;
    }

    return 0;

}

/*
DO WHILE LOOP

basically just a variant of the while loop

tldr loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

*/

#include <stdio.h>

int i = 1;

int main(){
do {
  printf("%d\n", i);
  i++;
}
while (i < 5); //should print out 1 2 3 4

}

//some examples i made up

//eg1- while loop that prints out the even numbers between 0 to 20 (inclusive)

#include <stdio.h>

int even = 0;

int main(){

    while (even <= 20)
    {
        printf("%d\n", even);
        even+=2;
    }
    
}

//eg2- while loop that prints out the sum of even numbers between 0 to 20 (inclusive + summing)

#include <stdio.h>

int even = 0, sumEven = 0;

int main(){

    printf("These are the list of even numbers: \n");
    while (even <= 20)
    {
        printf("%d\n", even);
        sumEven += even;
        even+=2;
    }

    printf("The sum of all even numbers between 0 to 20 is %d", sumEven);
    return 0;
    
}

/*
FOR LOOP
for (expression 1; expression 2; expression 3) {  }
Expression 1 is executed (one time) before the execution of the code block.

Expression 2 defines the condition for executing the code block.

Expression 3 is executed (every time) after the code block has been executed.
*/

#include <stdio.h>

int i;
int main(){
for (i = 0; i < 5; i++) {
  printf("%d\n", i); 
}

return 0;
}

/*
Example prints  0 1 2 3 4
Expression 1 sets a variable before the loop starts (int i = 0).

Expression 2 defines the condition for the loop to run (i must be less than 5). 
If the condition is true, the loop will start over again, if it is false, the loop will end.

Expression 3 increases a value (i++) each time the code block in the loop has been executed.


NESTED LOOPS

tldr loops inside loops
the inner loop gets executed for each time the outer loop is executed
*/

#include <stdio.h>

int i, j;

main(){
// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes twice

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times cuz of 2 * 3
  }
}
return 0;
}

//another ex, sum of all numbers between 1 and 50 that are divisible by 5. 
//Use a for loop to iterate through the numbers and add only those divisible by 5 to the total sum.

#include <stdio.h>
int i, sum = 0;

int main(){

    for(i = 0; i <= 50; i+=5) {
        printf("%d\n", i);
        sum += i;
    }
    
    printf("The sum of all numbers divisible by 5 from 0-50 is %d", sum); 
return 0;
}

//use for loop that prints the multiplication table for a given number n (from 1 to 10). 
//The program should ask the user for the number n and then use a for loop to print the multiplication table for that number.

#include <stdio.h>

int i, num, mult;

int main(){

    printf("What is your chosen number from 1-10 for multiplication table? ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++) {
        mult = num * i;
        printf("%d * %d = %d\n", num, i, mult);
    }
       
return 0;

}

//Use a for loop to find the factorial of a given number n. 
//The program should ask the user for a number n and then calculate its factorial.

#include <stdio.h>

int i, num, factorres = 1;

int main(){

    printf("What is your number to find out the factorial? ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        factorres *= i;
    }

    printf("The factorial for %d is %d", num, factorres);

return 0;

}

//calculates the sum of all odd numbers between 1 and 100.

#include <stdio.h>

int i, num, sum = 0;

int main(){

    printf("What is your chosen number to find the the total odd numbers between 1 and chosen number; ");
    scanf("%d", &num);

    for (i = 1; i <= num; i += 2) {
        sum += i;
    }

    printf("The sum of all odd numbers between 1 and %d is %d", num, sum);

return 0;

}


/*
BREAK AND CONTINUE

break statement is used to jump out of the loop

eg:
*/

#include <stdio.h>

int i;

int main(){
for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
return 0;
}

/*
this one counts from 0 to 3, and only prints 0 1 2 3, ending on 4

meanwhile continue breaks an iteration in the loop

eg:
*/

#include <stdio.h>

int i;

int main(){
for (i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}

return 0;
}

//this prints 0 1 2 3 5 6 7 8 9 10, it skipped 4




/*
C ARRAYS RAHHHH

Arrays are esentially used to store multiple values inside a variable

eg:  int myNumbers[] = {25, 50, 75, 100};

accessing the array index number is eZ, 0 is the first number, second is the first number

for the funi example, if i say 0, it calls 25, if i say 1, it calls 50

eg;
int myNumbers[] = {25, 50, 75, 100};
printf("%d", myNumbers[0]); // le calls numero 25


to change a value in the array, do this:

int numero[] = {10, 20, 30 40};
numero[0] = 22;
printf("%d", numero[0]); // le prints 22 now



you can also set an array size like this:

// this declares that this array contains 4 int
int myNumbers[4];

// Add funi value for each index
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;


footnote: make sure the values does not conflict with the data type


to get the size of an array, you use the sizeof operator.


int myNumbers[] = {10, 25, 50, 75, 100};
printf("%lu", sizeof(myNumbers)); // Prints 20


the reason why it prints 20 is that each int type is worth 4 bytes, and since it contains 5 values,
that's basically 4x5 = 20 bytes.
tldr its used for mEMoRy manaGEmENT.

*/

//eg

#include <stdio.h>

int main(){

    int numeros[] = {20, 40, 60, 80, 100};

    int length = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < length; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}




