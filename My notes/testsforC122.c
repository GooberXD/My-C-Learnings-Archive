#include <stdio.h>
#include <string.h>
#include <math.h>

// digit reversal using recursion, binary to decimal, decimal to binary, prime numbers, hailstone numbers


//digit reversal using recursion
#include <stdio.h>

void reversedDigit(int n);

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed digit is ");
    reversedDigit(n);

}

void reversedDigit(int n){
    if (n == 0)
    return;
              
    printf("%d", n % 10);
    reversedDigit(n / 10);

}



//check if prime number recursion
#include <stdio.h>
#include <math.h>

int isPrime(int n, int divisor);

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n, sqrt(n)))
        printf("%d is a prime number!", n);

    else
        printf("%d is not a prime number.", n);

}

int isPrime(int n, int divisor){

    if (n <= 1)
        return 0;          //primes cant be 1 or 0

    if (n == 2)
        return 1;          //2 is the only even prime

    if (n % 2 == 0)        //even numbers aside from 2 are not prime
        return 0;

    if (divisor < 2)       //no factors are found, therefore number is prime
        return 1;

    if (n % divisor == 0)  //factor is found, therefore number is not a prime
        return 0;

    return isPrime(n, divisor - 1);

}


//decimal to binary recursion
#include <stdio.h>

void toBin(int n);

int main(){
    int n;

    printf("Enter a decimal: ");
    scanf("%d", &n);

    toBin(n);

}

void toBin(int n){
    if (n == 0)
        return;

    toBin(n / 2);

    printf("%d", n % 2);
}

//binary to decimal recursion
#include <stdio.h>

int toDeci(int n, int power);

int main(){
    int n;

    printf("Enter a binary: ");
    scanf("%d", &n);

    printf("The decimal version of this binary is: %d", toDeci(n, 0));

}

int toDeci(int n, int power){
    if (n == 0)
        return 0;

    return (n % 10) * (1 << power) + toDeci(n / 10, power + 1);
}

//hailstone recursion - If a number is even, divide it by 2 If a number is odd, multiply it by 3 and add 1.
#include <stdio.h>

void hailstonePrint(int n);

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d" , &n);

    hailstonePrint(n);
}

void hailstonePrint(int n){
    printf("%d ", n);

    if (n == 1)
        return;

    if (n % 2 == 0) //even so divide
        hailstone(n / 2);

    else
        hailstone (n * 3 + 1);

}

//deci to bin using loops
#include <stdio.h>

int toBinLoop(int n);

int main(){
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    printf("Binary is %d", toBinLoop(n));
    return 0;
}

int toBinLoop(int n){
    int bin = 0, place = 1;

    while(n > 0){
        bin += (n % 2) * place;

        n /= 2;

        place *= 10;

    }

    return bin;

}

//reversed number using loops
#include <stdio.h>

void reversednumLoop(int n);

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    reversednumLoop(n);

}

void reversednumLoop(int n){

    for(;n > 0;){
        printf("%d", n % 10);
        n /= 10;
    }

}

//armstrong recursion

#include <stdio.h>
#include <math.h>

int armstrongRec(int n, int dig);

int main(){
    int n;

    printf("Insert integer: ");
    scanf("%d", &n);

    if(n == armstrongRec(n, log10(n) + 1))
        printf("Number is an armstrong!");
    
    else    
        printf("Number is NOT an armstrong :<");

    return 0;

}

int armstrongRec(int n, int dig){
    if (n == 0)
        return 0;

    return pow(n % 10, dig) + armstrongRec(n / 10, dig);

}