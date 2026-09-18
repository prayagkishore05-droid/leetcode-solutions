#include <stdio.h>

int binarySearch(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    /*
       Test Case 1:
       nums = {1, 3, 5, 7, 9}
       target = 5
       Expected: Index = 2

       Test Case 2:
       nums = {1, 3, 5, 7, 9}
       target = 6
       Expected: Index = -1
    */

    int nums[] = {1, 3, 5, 7, 9};
    int n = 5;
    int target = 5;

    int result = binarySearch(nums, n, target);

    printf("Index: %d\n", result);

    return 0;
}