#include <stdio.h>

int main() {
    printf("timotei crackeme #5 keyfilegen by hacktooth\n");

    // open the file in write binary mode
    FILE* keyfile = fopen("timotei.crackme#5.enjoy!", "wb");
    if (keyfile != NULL) {
        // write 22 byte (all setted at 0x00)
        char buffer[22] = {0};
        fwrite(buffer, sizeof(char), 22, keyfile);
        
        // close file
        fclose(keyfile);
        
        printf("Key file created!\n");
        printf("Press ENTER to exit...");
        getchar();
    } else {
        printf("Error file not created!\n");
    }
    return 0;
}