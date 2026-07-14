//Suppose there are 500 tosses of the coin find the probability occurrences of head and tail using Random Number Generation Method. Use 0 for head and 1 for tail. Find the probability of occurrence of head and tail.

#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter the number of tosses: ");
    int tosses;
    scanf("%d", &tosses);

    //counters for head and tail
    int head =0;
    int tail =0;

    for(int i=0; i<tosses; i++){
        int random_number = rand() % 2; // generate random number 0 or 1
        if(random_number == 0){
            head++;
        } else {
            tail++;
        }
    }

    printf("Number of heads: %d\n", head);
    printf("Number of tails: %d\n", tail);
    printf("Probability of head: %.4f\n", (double)head / tosses);
    printf("Probability of tail: %.4f\n", (double)tail / tosses);
    return 0;
}