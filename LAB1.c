// Simulation using C language
// 10 random numbers, 987 as seed value, m=1000(a=37 and c=41)

#include <stdio.h>
#define M 1000
#define A 37
#define C 41

int main(){
    int seed = 987;
    int random_numbers[10];

    for(int i = 0; i < 10; i++){
        seed = (A * seed + C) % M;
        random_numbers[i] = seed;
    }

    printf("Generated random numbers:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", random_numbers[i]);
    }
    printf("\n");

    return 0;
}