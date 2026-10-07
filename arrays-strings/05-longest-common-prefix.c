#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[200];

    if (strsSize == 0) {
        prefix[0] = '\0';
        return prefix;
    }

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0')
            break;
    }

    return prefix;
}

int main(void) {
    // Test 1: Normal case
    char *strs1[] = {"flower", "flow", "flight"};
    char *result1 = longestCommonPrefix(strs1, 3);

    if (strcmp(result1, "fl") == 0)
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test 2: No common prefix
    char *strs2[] = {"dog", "racecar", "car"};
    char *result2 = longestCommonPrefix(strs2, 3);

    if (strcmp(result2, "") == 0)
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    return 0;
}