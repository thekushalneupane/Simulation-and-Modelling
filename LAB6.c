#include <stdio.h>

int main()
{
    int n = 5;
    int arrivalTime[5] = {0, 1, 2, 3, 4};
    int serviceTime[5] = {3, 2, 1, 4, 2};
    int waitingTime[5];

    int totalWaitTime = 0;
    int startTime = 0;

    // Calculate waiting time
    for(int i = 0; i < n; i++)
    {
        if(arrivalTime[i] > startTime)
        {
            startTime = arrivalTime[i];
        }

        waitingTime[i] = startTime - arrivalTime[i];
        totalWaitTime += waitingTime[i];
        startTime += serviceTime[i];
    }

    // Display waiting time of each customer
    printf("Customer\tWaiting Time\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\n", i + 1, waitingTime[i]);
    }

    // Calculate average waiting time
    float averageWaitingTime = (float)totalWaitTime / n;

    printf("\nAverage Waiting Time = %.2f\n", averageWaitingTime);

    return 0;
}
