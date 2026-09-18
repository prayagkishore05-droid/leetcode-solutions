#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int insertPos = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    while (insertPos < n) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

void printArray(int nums[], int n) {
    printf("[");

    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

int main() {
    /*
       Test Case 1:
       nums = {0, 1, 0, 3, 12}
       Expected: [1, 3, 12, 0, 0]

       Test Case 2:
       nums = {0, 0, 0}
       Expected: [0, 0, 0]
    */
   int nums[] = {0, 1, 0, 3, 12};
int n = 5;
    
    moveZeroes(nums, n);

    printf("Result: ");
    printArray(nums, n);

    return 0;
}