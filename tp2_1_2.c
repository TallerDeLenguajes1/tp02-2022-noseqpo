#define N 20
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    double vt[N];
    double *p;
    p = &vt[0];
    for(i = 0; i < N; i++)
    {
        *(p+i) = 1 + rand() % 100;
        printf("% d ", *(p+i));
    }

    return 0;
}