// using any of the three sorting method, given an integer k, sort their absolute difference

#include <stdio.h>
#include <stdlib.h>

void absdiff(int arr[], int size, int k){

    for(int i = 0; i < size; i++){
        arr[i] = abs(arr[i] - k);
    }

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("This is the sorted absolute difference:\n");

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int k, size;

    printf("Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("K: ");
    scanf("%d", &k);

    absdiff(arr, size, k);    

}

// print ang gaps
// ex. arr = {4,7,9} output kay 5,6,8

#include <stdio.h>
#include <stdlib.h>

void gapPrint(int arr[], int size){

    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Gaps: ");
    for(int i = 0; i < size - 1; i++){
        for(int j = arr[i] + 1; j < arr[i + 1]; j++){
            printf("%d ", j);
        }
    }
}

int main(){
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    gapPrint(arr, size);


}


