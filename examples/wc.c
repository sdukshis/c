/*
 Count chars from standart input
 -------------------------------
 Filonov Pavel
*/

#include <stdio.h>

int main()
{
    int ch;
    int counter = 0;

    while ((ch = getchar()) != EOF) {
        ++counter;
    }

    printf("%d\n", counter);

    return 0;
}
