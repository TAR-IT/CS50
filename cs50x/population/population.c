#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // Initialize years
    int years = 0;

    // Calculate number of years until we reach threshold
    while (start_size < end_size)
    {
        int born = start_size / 3;
        int passed_away = start_size / 4;
        start_size = start_size + born - passed_away;
        years++;
    }

    // Print number of years
    printf("Years: %i\n", years);

    return 0;
}
