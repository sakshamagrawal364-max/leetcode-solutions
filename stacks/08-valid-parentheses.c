#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1)
                return false;

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main(void) {
    // Test 1: Valid parentheses
    char s1[] = "()[]{}";

    if (isValid(s1))
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test 2: Invalid parentheses
    char s2[] = "(]";

    if (!isValid(s2))
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    return 0;
}