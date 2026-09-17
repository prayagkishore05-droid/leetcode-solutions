#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    /*
       Test Case 1:
       Input: "hello"
       Expected: "olleh"

       Test Case 2:
       Input: "a"
       Expected: "a"
    */

    char str[] = "hello";
    int n = strlen(str);

    reverseString(str, n);

    printf("Reversed string: %s\n", str);

    return 0;
}