//Jones Santos Czinczel RA:32089041

#include <stdio.h>

void partition(int v[], int n)
{

    int vmen[n], vmai[n], i, j = 0, k = 0, p = v[0];

    for (i = 1; i < n; i++)
    {
        if (v[i] <= p)
            vmen[j++] = v[i];
        else
            vmai[k++] = v[i];
    }

    int tmen = j, tmai = k;
    k = j = i = 0;

    while (j < tmen)
    {
        v[i++] = vmen[j++];
    }

    v[i++] = p;

    while (k < tmai)
    {
        v[i++] = vmai[k++];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

int main()
{
    int n = 8;
    int v[8] = {7, 4, 3, 1, 8, 2, 0, 9};
    partition(v, n);
}