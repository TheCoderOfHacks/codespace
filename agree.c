#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agreee? ");

    if (c =='y')
    {
        printf("Agreed.\n");
    }
    else if (c =='Y')
    {
        printf("Agreed.\n");
    }
    else if (c =='n')
    {
        printf("Not agreed.\n");
    }
    else if (c =='N')
    {
        printf("Not agreed.\n");
    }
}