

//Nome: Jones Santos Czinczel RA: 32089041//

static int
partitionLocal(int v[], int p, int r)
{
    int c = v[r]; // pivô
    int t, j = p;
    for (int k = p; /*A*/ k < r; ++k)
        if (v[k] <= c)
        {
            t = v[j], v[j] = v[k], v[k] = t;
            ++j;
        }
    t = v[j], v[j] = v[r], v[r] = t;
    return j;
}

int main()
{
    int r = 7;
    int p = 0;
    int v[8] = {1, 3, 5, 6, 11, 9, 10, 7};
    partitionLocal(v, p, r);
    for (int i = 0; i < 8; i++)
    {
        printf("%d/ ", v[i]);
    }
}