// Estimation of value of pi using equation of circle

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 20;
    int pointsInsideCircle = 0;
    double x, y, piEstimate;

    // Seed the random number generator
    srand(time(0));

    // Generate random points
    for(int i = 0; i < n; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        if((x * x + y * y) <= 1.0)
        {
            pointsInsideCircle++;
        }
    }

    // Estimate the value of pi
    piEstimate = (4.0 * pointsInsideCircle) / n;

    // Display results
    printf("Total Points = %d\n", n);
    printf("Points Inside Circle = %d\n", pointsInsideCircle);
    printf("Estimated Value of Pi = %.4f\n", piEstimate);

    return 0;
}