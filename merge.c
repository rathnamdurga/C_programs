 #include <stdio.h>
void mergesort(int[30], int, int);
void merging(int[30], int, int, int, int);

void main()
{
    int arr[30], n, i;
    printf("Enter no of elements:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, n - 1);
    printf("\nSorted array is :");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void mergesort(int a[30], int lo, int up)
{
    int mid;
    if (lo < up)
    {
        mid = (lo + up) / 2;
        mergesort(a, lo, mid);
        mergesort(a, mid + 1, up);
        merging(a, lo, mid, mid + 1, up);
    }
}

void merging(int a[30], int lo, int mid, int midp1, int up)
{
    int temp[50];
    int i, j, k;
    i = lo;
    j = midp1;
    k = 0;
    while (i <= mid && j <= up)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
            temp[k] = a[j];
        k++;
        j++;
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= up)
    {
        temp[k] = a[j];
        k++;
        j++;
    }

    for (i = lo,j=0; i <= up; i++,j++)
    {
        a[i] = temp[j];
    }
}
