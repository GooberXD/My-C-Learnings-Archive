//W3RESOURCE gauntlet gaming - https://www.w3resource.com/c-programming-exercises/for-loop/index.php#editorr
//LOOPS EXERCISES

// 1. Write a program in C to display the first 10 natural numbers.
// Expected Output :
// 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>

int main(){

    int num = 10;

    for(int i = 1; i <= num; i++){
        printf("%d ", i);
    }

    return 0;
}

// 2. Write a C program to compute the sum of the first 10 natural numbers.
// Expected Output :
// The first 10 natural number is :
// 1 2 3 4 5 6 7 8 9 10
// The Sum is : 55

#include <stdio.h>

int main(){
    int num = 10, ctr = 0;
    printf("The first 10 natural number is: \n");

    for(int i = 1; i <= num; i++){
        printf("%d ", i);
        ctr += i;

    }

    printf("\nThe sum is: %d", ctr);

    return 0;
}

// 3. Write a program in C to display n terms of natural numbers and their sum.
// Test Data : 7
// Expected Output :
// The first 7 natural number is :
// 1 2 3 4 5 6 7
// The Sum of Natural Number upto 7 terms : 28 

#include <stdio.h>

int main(){
    int data = 7, ctr = 0;
    
    printf("The first %d natural number is: \n", data);

    for(int i = 1; i <= data; i++){
        printf("%d ", i);
        ctr += i;
    }

    printf("\nThe sum of Natural Number of up to %d: %d", data, ctr);

    return 0;
}

// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include <stdio.h>

int main(){
    int num, sum = 0, ctr = 1;

    printf("Input the 10 numbers: \n");

    do{
        printf("Number %d: ", ctr);
        scanf("%d", &num);

        sum += num;

        ctr++;
    }while(ctr <= 10);

    printf("The sum of 10 numbers is: %d\n", sum);

    printf("The Average is: %.2f", (float)sum / 10);
    
    return 0;
}

// 5. Write a program in C to display the cube of the number up to an integer.
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :124

#include <stdio.h>
#include <math.h>

int main(){

    int num, i = 1;

    printf("Input number of terms: ");
    scanf("%d", &num);

    do{
        
        printf("Number is: %d and cube of %d is %d\n", i, i , (int)pow(i, 3));
        
    i++;
    }while(i <= num);

    return 0;
}


// 6. Write a program in C to display the multiplication table for a given integer.
// Test Data :
// Input the number (Table to be calculated) : 15
// Expected Output :
// 15 X 1 = 15
// ...
// ...
// 15 X 10 = 150

#include <stdio.h>

int main(){
    int num;

    printf("Input number for table: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}

// 7. Write a program in C to display the multiplier table vertically from 1 to n.
// Test Data :
// Input upto the table number starting from 1 : 8
// Expected Output :
// Multiplication table from 1 to 8
// 1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
// ...
// 1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80 

#include <stdio.h>

int main(){
    int num;

    printf("Input up to the table number starting from 1: ");
    scanf("%d", &num);

    printf("Multiplication table from 1 to %d\n", num);

    for(int i = 1; i <= num; i++){
        
        for(int j = 1; j <= 10; j++){
            printf("%d x %d = %d, ", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}

// 8. Write a C program to display the n terms of odd natural numbers and their sum.
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100 

#include <stdio.h>

int main(){
    int terms, oddsum = 0;

    printf("Input number of terms: ");
    scanf("%d", &terms);

    printf("The odd numbers are:\n");

    int oddterms = terms * 2;

    for(int i = 1; i <= oddterms; i++){
        if (i % 2 != 0){
            printf("%d ", i);
            oddsum += i;
        }

    }
    printf("\nThe sum of odd natural numbers up to %d terms: %d", terms, oddsum);

    return 0;
}

// 9. Write a program in C to display a pattern like a right angle triangle using an asterisk.

// The pattern like :

// *
// **
// ***
// ****

#include <stdio.h>

int main(){
    int n;

    printf("Layers to print: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i; j++){
            printf("*");
        }
    
    printf("\n");

    }

    return 0;
}

// 10. Write a C program to display a pattern like a right angle triangle with a number.

// The pattern like :

// 1
// 12
// 123
// 1234

#include <stdio.h>

int main(){
    int n;

    printf("How many layers to print with numbers? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }

    printf("\n");

    }

    return 0;
}

// 11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

// The pattern like :

//  1
//  22
//  333
//  4444

#include <stdio.h>

int main(){
    int n;

    printf("How many layers to print with numbers? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }

    printf("\n");

    }

    return 0;
}

