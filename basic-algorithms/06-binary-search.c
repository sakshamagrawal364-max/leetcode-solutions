#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main(void) {
    // Test 1: Target exists
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int result1 = search(nums1, 6, 9);

    if (result1 == 4)
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test 2: Target does not exist
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int result2 = search(nums2, 6, 2);

    if (result2 == -1)
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    return 0;
}
