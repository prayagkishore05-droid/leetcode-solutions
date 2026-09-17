#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    int count[256] = {0};

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    /*
       Test Case 1:
       s = "anagram"
       t = "nagaram"
       Expected: Anagram

       Test Case 2:
       s = "rat"
       t = "car"
       Expected: Not an Anagram
    */

    char s[] = "anagram";
    char t[] = "nagaram";

    if (isAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not an Anagram\n");
    }

    return 0;
}