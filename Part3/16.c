// Enter a loop - ending condition is if the value is equal -1
// Ask how much kilometers
// Show Lt/100km :

// When loop finishes Show General Average

#include <stdio.h>

int main() {
    double km = 0.0;
    double liters = 0.0;
    double tripAvg = 0.0;
    
    // Accumulator variables for general average
    double totalKm = 0.0;
    double totalLiters = 0.0;
    double generalAverage = 0.0;

    // Get the initial kilometer input before entering the loop
    printf("Enter kilometers driven (-1 to stop): ");
    scanf("%lf", &km);

    // Loop condition: continues as long as km is not -1
    while (km != -1) {

        if (km > 0) {
            printf("Enter fuel used in liters: ");
            scanf("%lf", &liters);

            if (liters >= 0) {
                // Calculate consumption for the current trip (Liters per 100km)
                tripAvg = (liters / km) * 100.0;
                printf("-> Trip consumption: %.2f L/100km\n\n", tripAvg);

                // Accumulate totals for the final average calculation
                totalKm = totalKm + km;
                totalLiters = totalLiters + liters;
            } else {
                printf("Fuel amount cannot be negative.\n\n");
            }
        } else {
            printf("Please enter a kilometer value greater than 0.\n\n");
        }

        // Ask for the next kilometer input to decide whether to repeat or exit
        printf("Enter kilometers driven (-1 to stop): ");
        scanf("%lf", &km);
    }

    // Display the General Average after the loop ends
    if (totalKm > 0) {
        generalAverage = (totalLiters / totalKm) * 100.0;

        printf("GENERAL AVERAGE: %.2f L/100km\n", generalAverage);
    } else {
        printf("No valid data was entered.\n");
    }

    return 0;
}