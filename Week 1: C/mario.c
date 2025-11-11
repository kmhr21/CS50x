// #include <cs50.h>     CS50.h is available in the course's codespace. it contains finctions like get_int used in line 16
#include <stdio.h>

// prototype print_row function
void print_row(int bricks);

int main(void)

{
    // declaring all variables to keep the code tidy
    int height, row, column, space;

    // keep asking the user for height incase the input was a string, negative number or zero
    do
    {
        height = get_int("Height? ");
    }
    while (height < 1);

    // first for loop is to create rows before jumping into the next loops ending with a new line
    for (row = 0; row < height; row++)
    {
        // to code a right ascending pyramid we add space(s) before our building blocks "spaces =
        // height - row - 1"
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // to add # to our coloumns i relation to the height and row number
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
