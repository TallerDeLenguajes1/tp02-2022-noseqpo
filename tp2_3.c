#define N 5
#define M 7
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i,j;
    int mt[N][M];

    for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
    {
    mt[i][j]=1+rand()%100;
    printf("%lf ", mt[i][j]);
    }
    printf("\n");
    }

    return 0;
}

