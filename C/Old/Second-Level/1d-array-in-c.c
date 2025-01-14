// An array is a container object that holds a fixed number of values of a single type. 
// To create an array in C, we can do int arr[n];. Here, arr, is a variable array which holds up to 10  
// integers. The above array is a static array that has memory allocated at compile time. 
// A dynamic array can be created in C, using the malloc function and the memory is 
// allocated on the heap at runtime. To create an integer array, arr of size n, 
// int *arr = (int*)malloc(n * sizeof(int)), where n points to the base address of the array. 
// When you have finished with the array, use free(arr) to deallocate the memory.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, sum=0;
    scanf("%d", &n);
    int *arr = (int*) malloc(n*sizeof(int));
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j<n;j++){
        sum = sum + arr[j];
    }
    printf("%d\n", sum);
    free(arr);
    return 0;
}