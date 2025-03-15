// 20 pts multichoice
// 1. Majority element (but icompare ang frequency sa value if greater than size sa array /2)
// 2. Mama's boy (
//  Example:
// Input: 1 2 3 4 5 6 7 8
// Output: 1 8 2 7 3 6 4 5)
// 3. GCD iterative solution
// 4. GCD recursive solution
// 5. Moving zeroes
// 6. Good pairs (good pair if nums[i] == nums[j] and i != j)
// 7. Cody world cup (ez shit ra kaau ni)
// 8. Duplicate

// 1 Majority element (but icompare ang frequency sa value if greater than size sa array / 2)

#include <stdio.h>

int findMajor(int arr[], int size);

int main(){
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements:\n");
    
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    if(findMajor(arr, size) == -1){
        printf("No major found.");
    }
    
    else{
        printf("Major found %d", findMajor(arr, size));
    }

    return 0;
}

int findMajor(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        int ctr = 0;
        for(int j = 0; j < size; j++){
            if (arr[j] == arr[i]){
                ctr++;
            }
        }

        if(ctr > size / 2 && ctr > arr[i]){
            return arr[i];
        }

    }

    return -1;
}

// 2. Mama's boy (
//  Example:
// Input: 1 2 3 4 5 6 7 8
// Output: 1 8 2 7 3 6 4 5)
#include <stdio.h>

void mamaboys(int arr[], int size);

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements:\n");
    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    mamaboys(arr, size);

    return 0;

}

void mamaboys(int arr[], int size){
    int left = 0, right = size - 1;

    while (left <= right){
        printf("%d ", arr[left++]);
        
        if(left <= right){
            printf("%d ", arr[right--]);
        }
    }

}

// 3. GCD iterative solution

#include <stdio.h>

int gcdIter(int a, int b);

int main(){
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("GCD is %d", gcdIter(a, b));
    return 0;
}

int gcdIter(int a, int b){

    while(b){
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;

}

// 4. GCD recursive solution

#include <stdio.h>

int gcdRec(int a, int b);

int main(){
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("GCD is %d", gcdRec(a, b));
    return 0;
}

int gcdRec(int a, int b){

    if (b == 0)
        return a;

    return gcdRec(b, a % b);

}

// 8. Duplicate

#include <stdio.h>

int duplicate(int arr[], int size);

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    if(duplicate(arr, size) == -1){
        printf("No dupe found.");
    }

    else{
        printf("The duplicate is: %d", duplicate(arr, size));
    }
}

int duplicate(int arr[], int size){

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                return arr[i];
            }
        }
    }

    return -1;
}

// array zero sum

#include <stdio.h>

void arrayZeroSum(int arr[], int size);

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    arrayZeroSum(arr, size);

}

void arrayZeroSum(int arr[], int size){

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] + arr[j] == 0){
                printf("The array has two elements that sum to zero.");
                return;
            }
        }
    }

    printf("The array does not have two elements that sum to zero.");
}

// 6. Good pairs (good pair if nums[i] == nums[j] and i != j)

#include <stdio.h>

int goodPairs(int arr[], int size);

int main(){
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("There are %d good pairs!", goodPairs(arr, size));

    return 0;
}

int goodPairs(int arr[], int size){
    int ctr = 0;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                ctr++;
            }
        }
    }

    return ctr;
}



// 5. Moving zeroes

#include <stdio.h>

void movezeroes(int arr[], int size);

int main(){
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    movezeroes(arr, size);

    return 0;
}

void movezeroes(int arr[], int size){

    int j = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("The new order is:\n");

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

