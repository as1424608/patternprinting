#include<stdio.h>

int main() {
    int i, j, k, row;
    char ch;  // Declare 'ch' outside the loop to preserve its value

    // Input for number of rows
    scanf("%d", &row);
    
    // Outer loop for rows
    for (i = 1; i <= row; i++) {
        ch = 'A';  // Initialize 'ch' to 'A' at the beginning of each row

        // Print leading spaces
        for (j = 1; j <= row - i; j++) {
            printf(" ");
        }
        
        // Print characters for this row
        for (k = 1; k <= 2*i-1; k++) {
            printf("%c", ch);  // Print the character
        }
        
        // Move to the next line
        printf("\n");

        // Increment 'ch' to the next character for the next row
        ch = ch + 1;
    }
    
    return 0;
}
