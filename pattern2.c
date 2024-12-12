#include<stdio.h>

int main() {
    int i, j, k, row;
   

    // Input for number of rows
    scanf("%d", &row);
    
    // Outer loop for rows
    for (i = 1; i <= row; i++) {
        

        // Print leading spaces
        for (j = 1; j <= row - i; j++) {
            printf(" ");
        }
        int c=1;  // Initialize co-efficient of pascal's triangle 
        
        // Print characters for this row
        for (k = 1; k <= i; k++) {
            printf("%d ", c);  // Print the co-efficient of pascal's triangle
        c=c*(i-k)/k; // calculating the co-efficient of pascal's triangle
        }
        
        
   
        printf("\n");

       
    }
    
    return 0;
}
