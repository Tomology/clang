#include <stdio.h>

main()
{
    // while loop
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    // do while loop
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 0);

    // for loop
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
}