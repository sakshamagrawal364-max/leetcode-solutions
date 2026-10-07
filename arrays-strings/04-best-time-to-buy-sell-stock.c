#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;

            if (profit > maxProfitValue) {
                maxProfitValue = profit;
            }
        }
    }

    return maxProfitValue;
}

int main(void) {
    // Test Case 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int result1 = maxProfit(prices1, 6);

    if (result1 == 5)
        printf("Test 1 Passed\n");
    else
        printf("Test 1 Failed\n");

    // Test Case 2: Edge case - prices only decrease
    int prices2[] = {7, 6, 4, 3, 1};
    int result2 = maxProfit(prices2, 5);

    if (result2 == 0)
        printf("Test 2 Passed\n");
    else
        printf("Test 2 Failed\n");

    return 0;
}