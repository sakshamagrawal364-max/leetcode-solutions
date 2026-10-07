#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main(void) {
    // Test 1: Normal case
    int nums1[] = {0, 1, 0, 3, 12};
    int expected1[] = {1, 3, 12, 0, 0};

    moveZeroes(nums1, 5);

    int passed1 = 1;
    for (int i = 0; i < 5; i++) {
        if (nums1[i] != expected1[i])
            passed1 = 0;
    }

    if (passed1)
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test 2: Single zero
    int nums2[] = {0};

    moveZeroes(nums2, 1);

    if (nums2[0] == 0)
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    return 0;
}