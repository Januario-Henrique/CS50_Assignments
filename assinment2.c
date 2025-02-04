#include <stdio.h>
#include <string.h>
#include <math.h>

void hexToBinary(char hex[], char binary[]) {
    int i = 0;
    int j = 0;

    // Loop through each character in the hex string
    while (hex[i]) {
        switch (hex[i]) {
            case '0':
                strcpy(&binary[j], "0000");
                j += 4;
                break;
            case '1':
                strcpy(&binary[j], "0001");
                j += 4;
                break;
            case '2':
                strcpy(&binary[j], "0010");
                j += 4;
                break;
            case '3':
                strcpy(&binary[j], "0011");
                j += 4;
                break;
            case '4':
                strcpy(&binary[j], "0100");
                j += 4;
                break;
            case '5':
                strcpy(&binary[j], "0101");
                j += 4;
                break;
            case '6':
                strcpy(&binary[j], "0110");
                j += 4;
                break;
            case '7':
                strcpy(&binary[j], "0111");
                j += 4;
                break;
            case '8':
                strcpy(&binary[j], "1000");
                j += 4;
                break;
            case '9':
                strcpy(&binary[j], "1001");
                j += 4;
                break;
            case 'A':
            case 'a':
                strcpy(&binary[j], "1010");
                j += 4;
                break;
            case 'B':
            case 'b':
                strcpy(&binary[j], "1011");
                j += 4;
                break;
            case 'C':
            case 'c':
                strcpy(&binary[j], "1100");
                j += 4;
                break;
            case 'D':
            case 'd':
                strcpy(&binary[j], "1101");
                j += 4;
                break;
            case 'E':
            case 'e':
                strcpy(&binary[j], "1110");
                j += 4;
                break;
            case 'F':
            case 'f':
                strcpy(&binary[j], "1111");
                j += 4;
                break;
            default:
                printf("Invalid hexadecimal digit %c\n", hex[i]);
                return;
        }
        i++;
    }
    binary[j] = '\0'; // Null terminate the binary string
}

int main() {
    char hex[20];
    char binary[80]; // Enough space to hold binary representation

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    hexToBinary(hex, binary);

    printf("Binary equivalent: %s\n", binary);

    return 0;
}
