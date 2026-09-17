#include <stdio.h>

int main() {
    /*
       Test Case 1:
       prices = {7, 1, 5, 3, 6, 4}
       Expected: Maximum Profit = 5

       Test Case 2:
       prices = {7, 6, 4, 3, 1}
       Expected: Maximum Profit = 0
    */

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}