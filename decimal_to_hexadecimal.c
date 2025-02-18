#include <stdio.h>

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimalNumber) {
    // Array to store hexadecimal number
    char hexadecimalNumber[100];
    
    // Initialize index to zero
    int index = 0;
    
    // Loop to convert decimal to hexadecimal
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        
        // Convert integer to character
        if (remainder < 10) {
            hexadecimalNumber[index] = remainder + '0';
        } else {
            hexadecimalNumber[index] = remainder - 10 + 'A';
        }
        
        index++;
        decimalNumber = decimalNumber / 16;
    }
    
    // Print the hexadecimal number in reverse order
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimalNumber[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    
    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    // Function call to convert decimal to hexadecimal
    decimalToHexadecimal(decimalNumber);
    
    return 0;
}
``` ▋