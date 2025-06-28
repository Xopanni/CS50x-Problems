#include <stdio.h> // Include standard input-output header for printf and scanf functions
void ask(char name[]); // Declaration of ask function
void hello(char name[]); // Declaration of hello function

int main()
{
    char name[50]; // Array to hold the name
    ask(name); // Call to ask function to get the name
    hello(name); // Call to hello function to greet the user
    return 0;
}

void hello(char name[]) // Function to greet the user
{
    // Print a greeting message using the name provided
    printf("Hello, %s!\n", name); // Use %s to format the string
}

void ask(char name[])
{
    // Prompt the user for their name and read it into the name array
    printf("What is your name? ");
    scanf("%49s", name); // Read a string from standard input, limiting to 49 characters
}
