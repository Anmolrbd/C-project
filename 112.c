#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, sum = 0, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    
    free(arr);
    
    getch();
    return 0;
}

