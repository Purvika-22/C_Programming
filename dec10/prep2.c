#include <stdio.h>

int main() {
    // Initial number of guests and cake weight
    int initialGuests = 5;
    int cakeWeight = 10;

    // Array to represent the weight of cake each guest receives
    int cakeDistribution[initialGuests];

    // Calculate initial distribution
    for (int i = 0; i < initialGuests; i++) {
        cakeDistribution[i] = cakeWeight / initialGuests;
    }

    // Print initial distribution
    printf("Initial Cake Distribution:\n");
    for (int i = 0; i < initialGuests; i++) {
        printf("Guest %d gets %d kgs\n", i + 1, cakeDistribution[i]);
    }

    // Additional guests
    int additionalGuests = 3;

    // Update number of guests
    int totalGuests = initialGuests + additionalGuests;

    // Update cake distribution for all guests
    for (int i = 0; i < totalGuests; i++) {
        cakeDistribution[i] = cakeWeight / totalGuests;
    }

    // Print final distribution
    printf("\nUpdated Cake Distribution:\n");
    for (int i = 0; i < totalGuests; i++) {
        printf("Guest %d gets %d kgs\n", i + 1, cakeDistribution[i]);
    }

    return 0;
}
