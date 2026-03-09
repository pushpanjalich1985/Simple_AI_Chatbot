#include<stdio.h>
int main(){

//1. reverse the elements of an array in place, use two indices: one from start, one from the end, swap elements until both indices meet, do not use an extra array.
 

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = n - 1;
    while (i < j) {
        int a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
        i++;
        j--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }



//2.find the second largest element in an array, maintain two variables: largest and the second largest, transverse array once, update values based on comparisions.
    int arr[] = {10, 20, 30, 50, 70};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i< n; i++){

        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if( arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
     }
     printf("Largest = %d\n", largest);
    printf("Second largest = %d\n", secondLargest);




//3. Remove duplicate elements from an erray, use a second array to store unique elementa, check if element alreay exists before adding, preserve original order.



//4. Rotate array elements left by k positions, use modulo operation operation to handle k>n, store rotated elements in temporary array, copy result back to original array




return 0;
}
