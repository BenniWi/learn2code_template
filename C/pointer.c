// pointer swap 08.02.2023

#include <stdio.h>
#define nl printf("\n")

int main()
{
    int x = 5; int y = 4;
    int* px = &x;
    int* py = &y; 
    int tmp = 0;
    printf("x: %d, y:%d\n", x, y);

    // Tauschen
    printf("Nach Tausch: "); nl;
    tmp = *px;
    *px = *py;
    *py = tmp;
    printf("x: %d, y:%d", x, y);

    return 0;
}

