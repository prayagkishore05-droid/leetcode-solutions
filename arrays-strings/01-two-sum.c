#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    /*
       Test Case 1:
       nums = {2, 7, 11, 15}, target = 9
       Expected: Indices: 0, 1

       Test Case 2:
       nums = {3, 3}, target = 6
       Expected: Indices: 0, 1
    */

    // Check every pair of numbers
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found\n");

    return 0;
}