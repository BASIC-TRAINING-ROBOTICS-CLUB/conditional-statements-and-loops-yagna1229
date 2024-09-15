void binary_to_gray(int a[], int n) 
{
    int i;
    printf("Binary:");
    for (i = 0; i< n; i++) 
    {
        printf ("%d", a[i]);
    }
    printf("\n");
    int gray[n];
    gray[0]=a[0];
    for (i = 1; i < n; i++) 
    {
        gray [i] = a[i] ^ a[i-1];
    }
    printf("Gray Code: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d", gray[i]);
    }
    printf("\n");
}
    