//WAP to generate random numbers using middle square method. take four digit number as a seed from user and generate 5 random numbers.

#include <stdio.h>
int main(){
    int seed;
    printf("Enter a four-digit seed number: ");
    scanf("%d", &seed);

    printf("Generated random numbers:\n");
    for(int i = 0; i < 5; i++){

        long long squared = (long long)seed * seed; // Squaring the seed

        int middle = (squared / 100) % 10000;// extracting the middle four digits

        printf("%04d\n", middle); // print the generated random numbers

        seed = middle; // Updates the seed for the next iteration
    }

    return 0;
}