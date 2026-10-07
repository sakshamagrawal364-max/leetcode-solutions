#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main(void) {
    // Test Case 1: Typical case
    char str1[] = "hello";
    reverseString(str1, strlen(str1));
    printf("Test 1: %s\n", str1);

    // Test Case 2: Edge case - single character
    char str2[] = "A";
    reverseString(str2, strlen(str2));
    printf("Test 2: %s\n", str2);

    return 0;
}