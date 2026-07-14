//Applying chi square test in numbers generated from LAB 1:
//5% significance level, chi_square value = 11.07.
// Face               Observed Value
// 1                  8 
// 2                  9 
// 3                  10
// 4                  11
// 5                  12
// 6                  10

#include <stdio.h>
#define CHI_SQUARE_VALUE 11.07

int main(){
    int n;  // declare n here

    printf("Enter the number of faces on the dice: ");
    scanf("%d", &n);

    printf("Enter the observed values for each face:\n");
    int observed_values[n];

    for(int i = 0; i < n; i++){
        printf("Face %d: ", i + 1);
        scanf("%d", &observed_values[i]);
    }

    // Calculate the expected value for each face
    int total_observed = 0;
    for(int i = 0; i < n; i++){
        total_observed += observed_values[i];
    }
    double expected_value = (double)total_observed / n;

    // Calculate the chi square statistic
    double chi_square_statistic = 0.0;
    for(int i = 0; i < n; i++){
        chi_square_statistic += ((observed_values[i] - expected_value) * (observed_values[i] - expected_value)) / expected_value;
    }

    printf("Chi-square statistic: %.2f\n", chi_square_statistic);

    if(chi_square_statistic > CHI_SQUARE_VALUE){
        printf("The die is biased.\n");
    } else {
        printf("The die is not biased.\n");
    }

    return 0;
}