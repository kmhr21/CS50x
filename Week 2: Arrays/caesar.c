// #include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // make sure the command line has only one key (0 reserved for name, 1 is what the user inputs)
    if (argc != 2)
    {
        printf("Usage: ./caeser key\n");
        return 1;
    }

    // check if all the char in the second array are ints
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caeser key\n");
            return 1;
        }a
    }

    int k = atoi(argv[1]);
    // get plaintext

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int j = 0; j < strlen(plaintext); j++)

    {
        // loop into each char in the plain text und subtract 65>90 (capital letetrs) - 97>122
        // (lower case)to reset the value of A to 0, add the key before dividing and using the
        // remainder to wrap around when the value is outside the scope of the alphabet in ASCII at
        // the end add the 65 back to get the deciphered char's ASCII value

        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
}
