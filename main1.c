#include <stdio.h>

int main() {
    // Buffer to store user input
    char userInput[100];

    // Prompt user for input
    printf("Enter your input: ");

    // Read input from the console
    fgets(userInput, sizeof(userInput), stdin);

    // Open the file for writing
    FILE *file = fopen("user_input.txt", "w");

    // Check if file opened successfully
    if (file != NULL) {
        // Write user input to the file
        fprintf(file, "%s", userInput);

        // Close the file
        fclose(file);

        // Inform the user
        printf("User input has been written to user_input.txt\n");
    } else {
        // Display an error message if the file couldn't be opened
        printf("Error opening file for writing\n");
    }

    return 0;
}