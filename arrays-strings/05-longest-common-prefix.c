#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int n) {
    int i = 0;

    while (1) {
        char current = strs[0][i];

        if (current == '\0') {
            break;
        }

        for (int j = 1; j < n; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                printf("Longest Common Prefix: ");
                for (int k = 0; k < i; k++) {
                    printf("%c", strs[0][k]);
                }
                printf("\n");
                return;
            }
        }

        i++;
    }

    printf("Longest Common Prefix: %s\n", strs[0]);
}

int main() {
    /*
       Test Case 1:
       Input: {"flower", "flow", "flight"}
       Expected: "fl"

       Test Case 2:
       Input: {"dog", "racecar", "car"}
       Expected: ""
    */

    char strs[][100] = {"flower", "flow", "flight"};
    int n = 3;

    longestCommonPrefix(strs, n);

    return 0;
}