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

// leaders
#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Leaders: ");

    int max = arr[size - 1];
    printf("%d ", max);
    
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] > max){
            max = arr[i];
            printf("%d ", max);
        }
    }

    return 0;
}

//column maximum

#include <stdio.h>

int main(){
    int r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    printf("Enter the elements of the array:\n");
    int arr[r][c];
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The column maximums are:\n");
    
    for(int j = 0; j < c; j++){
        int max = arr[0][j];
        for(int i = 1; i < r; i++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        printf("%d ", max);
    }
}

//row maximum

#include <stdio.h>

int main(){
    int r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    printf("Enter the elements of the array:\n");
    int arr[r][c];
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The row maximums are:\n");
    
    for(int i = 0; i < r; i++){
        int max = arr[i][0];
        for(int j = 1; j < c; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        printf("%d ", max);
    }
}

//spiral

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int top = 0, bottom = r - 1, left = 0, right = c - 1;;
    

    printf("Spiral order:\n");

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            printf("%d ", arr[top][i]);
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        // Print bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", arr[bottom][i]);
            bottom--;
        }

        // Print left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }

       
    }

    
    return 0;
}


// animation face

#include <stdio.h>
#include <unistd.h>

int main(){

    int sliding;

    printf("How many slides: ");
    scanf("%d", &sliding);
    printf(" \n\n\n");
    for(int i = 0; i < sliding; i++){
        printf("0    0\n");
        printf(" ----\n");
        printf(" \n\n\n");
        sleep(1);
        printf("0    0\n");
        printf(" -  -\n");
        printf("  -- \n");
        printf(" \n\n\n");
        sleep(1);
    }

}


//different version with pc fucks not having unistd for some reason

#include <stdio.h>
#include <time.h>

void aSingleFuckingSecondSkip(int tastickles) {
    clock_t start_time = clock();
    while (clock() < start_time + tastickles * (CLOCKS_PER_SEC / 1000));
}

int main(){

    int sliding, tastickles;

    printf("How many slides: ");
    scanf("%d", &sliding);
    printf(" \n\n\n");
    for(int i = 0; i < sliding; i++){
        printf("0    0\n");
        printf(" ----\n");
        printf(" \n\n\n");
        aSingleFuckingSecondSkip(1000);
        printf("0    0\n");
        printf(" -  -\n");
        printf("  -- \n");
        printf(" \n\n\n");
        aSingleFuckingSecondSkip(1000);
    }

}

// people who cant even afford fucking time.h
#include <stdio.h>

void holyshitthiswillbreakacpu() {
   
    for (volatile long i = 0; i < 1000000000; i++); // volatile basically shits on your pc, very inneficient test et
}

int main() {
    int sliding, tastickles;

    printf("How many slides: ");
    scanf("%d", &sliding);
    printf(" \n\n\n");
    for(int i = 0; i < sliding; i++){
        printf("0    0\n");
        printf(" ----\n");
        printf(" \n\n\n");
        holyshitthiswillbreakacpu();
        printf("0    0\n");
        printf(" -  -\n");
        printf("  -- \n");
        printf(" \n\n\n");
        holyshitthiswillbreakacpu();
    }
}