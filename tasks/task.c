#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 3)
    {
        printf("Usage: %s <number 1> <number 2>\n", argv[0]);
        return 0;
    }
    
    // Calculate and print the sum
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
