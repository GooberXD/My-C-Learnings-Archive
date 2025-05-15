#include <stdio.h>

//using all funny (valentine) types of loops

int main(){
    
    int i = 0, j = 0, messages;

    printf("How many messages?:");
    scanf("%d", &messages);

    for(int count = 0; count < messages; count++){
        printf("FUCK YOU SHAWN\n");

    }

    printf("\n");

    while(i < messages){
        printf("FUCK YOU AND YOUR GOLDILOCKS GRR\n");
        i++;
    }

    printf("\n");

    do{
        printf("gRrRr\n");
        j++;
    }while(j < messages);

    printf("\n");

}

//sum of 1 to n

#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe total sum is %d", sum);

}

//void example

#include <stdio.h>

void piggers(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe total number of piggers is %d", sum);

}
int main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    piggers(n);

}

