#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int s;
    do
    {
        s = get_int("Start Size: ");
    }
    while (s < 9);
    // TODO: Prompt for end size
    int e;
    {
        e = get_int("End Size: ");
    }
    while (e < s);
    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    while (s < e)
    {
        s = s + (s / 3) - (s / 4);
        y++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", y);
}
