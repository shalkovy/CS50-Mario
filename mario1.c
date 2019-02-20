#include <cs50.h>
#include <stdio.h>

void prspace(int a, int b);
void prhash(int a);

int main(void)
{
    int x;
    do
    {
    printf("how many bricks will be in your pyramid in height?\n");
    x = get_int("pyramid height: \n");
    }
    while (x<0 || x>23);

        for (int j = 0; j < x; j++)
        {
            prspace(x, j);

            prhash(j);

            printf(" ");

            prhash(j);


            printf("\n");
        }


}

void prspace(int a, int b)
{
    for (int i = 0; i < a-b-1; i++)
            {
                printf(" ");
            }
}

void prhash(int a)
{
    for (int y = 0; y < a+2; y++)
            {
                printf("#");
            }
}