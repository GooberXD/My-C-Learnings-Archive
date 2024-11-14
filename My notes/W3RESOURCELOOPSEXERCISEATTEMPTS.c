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

