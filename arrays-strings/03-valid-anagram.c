#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    // Test Case 1: Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    if (isAnagram(s1, t1))
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test Case 2: Edge case - different characters
    char s2[] = "rat";
    char t2[] = "car";

    if (!isAnagram(s2, t2))
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    return 0;
}