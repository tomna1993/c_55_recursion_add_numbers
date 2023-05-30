#include <cs50.h>
#include <stdio.h>

int calculate_sum(int number);

int main(void)
{
    int number = get_int("Number: ");

    int sum = calculate_sum(number);

    printf ("Sum of numbers up to %i is: %i\n", number, sum);
}

int calculate_sum(int number)
{
    if (number <= 1)
    {
        return number;
    }

    return number + calculate_sum(number - 1);
}