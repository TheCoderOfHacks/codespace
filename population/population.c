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
    while (start < 9);
    // TODO: Prompt for end size
    int e;
    {
        e = get_int("End Size: ");
    }
    while (e < s);
    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

}
