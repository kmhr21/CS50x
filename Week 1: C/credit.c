// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card;

    do {
        card = get_long("number ");
    }
    while (card < 0);

    int length;
    long tempCard = card;

    do {
        length++;
        tempCard /= 10;
    }
    while (card > 0);

    if (length != 13 && length != 15 && length != 16)
    {
        printf("Invalid\n");
        return 0;
    }
}
