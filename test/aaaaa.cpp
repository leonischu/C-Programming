int main()
{
    int randnumber;
    int a[100], i, large, small;

    for (i = 1; i <= 100; i++)
    {
       n = rand() % 100 + 1;
        printf("%d  ", randnumber);
    }
    for (i = 0; i < randnumber; i++)
    {
        a[randnumber];
    }
    large = small = a[0];
    for (i = 1; i < randnumber; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
        else if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("\n largest element present in the given array is : %d", large);
    printf("\n smallest element present in the given array is : %d", small);

    return 0;
}
