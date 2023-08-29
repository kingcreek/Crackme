#include <stdio.h>
#include <stdint.h>
#include <string.h>

int calculate_xor(int input) {
    int value = 0x9F46;
    int modified_value = value ^ input;
    return modified_value;
}

int main() {
    const char *allowed_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int expected_output = 0xEB11;
    
    int input;
    
    for (int i = 0; i < strlen(allowed_chars); i++) {
        for (int j = 0; j < strlen(allowed_chars); j++) {
            input = (allowed_chars[i] << 8) | allowed_chars[j];
            
            int result = calculate_xor(input);
            
            if (result == expected_output) {
                printf("Found a valid input: 0x%04x\n", input);
            }
        }
    }
    
    printf("No valid input found.\n");
    return 1;
}
