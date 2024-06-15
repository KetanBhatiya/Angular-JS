int a[MAX];
    int max, min, i, n;

    printf("enter the number of array:");
    scanf("%d", &n);

    printf("enter the integrs:\n");

    for (i = 1; i <= n; i++)
    {
        printf("element %d=", i);
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i <= n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("the maximum number of array is %d \n", max);
    printf("the minimum number of array is %d   ", min);
    return 0;
}