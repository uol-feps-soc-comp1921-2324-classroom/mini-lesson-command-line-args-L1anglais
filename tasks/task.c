#include <stdio.h>

int main(int argc, char *argv[]) {

    // check 3 command line inputs
    if (argc != 3)
    {
        printf("Usage: %s <number 1> <number 2>\n", argv[0]);
        return 0;
    }
    
    // check numbers entered are numbers
    if (atoi(argv[1]) < 1 || atoi(argv[2]) < 1)
    {
        printf("Error: Invalid numbers entered\n");
        return 1;
    }

    // Calculate and print the sum
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
