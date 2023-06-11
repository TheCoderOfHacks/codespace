#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("Whats your first name? ");
    string last = get_string("Whats you last name? ");
    printf("hello, %s %s\n", first, last);
}