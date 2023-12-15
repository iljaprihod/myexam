#include <stdio.h>

int main() {
    // Declare variables to store user input
    char name[50];
    int age;

    // Prompt user for their name
    printf("Enter your name: ");
    scanf("%s", name);  // Assuming a single-word name without spaces

    // Prompt user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Print personalized greeting
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}