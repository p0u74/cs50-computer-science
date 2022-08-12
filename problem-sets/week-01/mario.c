#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // ask for a valid height value.
    do
    {
        height = get_int("Enter height value, only 1-8 : ");
    }
    while (height < 1 || height > 8);
    // repeat print sharps in every lines.
    for (int i = 0; i < height; i++)
    {
        // make it look like a half pyramid.
        for (int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}