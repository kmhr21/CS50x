// #include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters you should give the customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    // Calculate how many dimes you should give the customer
    int dimes = calculate_dimes(cents);
    // Subtract the value of those dimes from the remaining cents
    cents = cents - (dimes * 10);

    // Calculate how many nickels you shoud give the customer
    int nickels = calculate_nickels(cents);
    // Subtract the value of those nickels from the remaining cents
    cents = cents - (nickels * 5);

    // Calculate the number of pennies you should give the customer
    int pennies = calculate_pennies(cents);
    // Subtract the value of those nickels from remaining cents
    cents = cents - (pennies * 1);
    // Sum the number of quarterts, dimes, nickels and pennies used
    int coins = quarters + dimes + nickels + pennies;
    // Print that sum
    printf("%i\n", coins);
}

// functions out of sight, out of mind

int calculate_quarters(int cents)
{

    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
