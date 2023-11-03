/* #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
} */

#include <stdio.h>

int recursiveSum(int arr[], int n, int index)
{
    // Base case: If the index is less than 0, return 0.
    if (index < 0)
    {
        return 0;
    }

    // Recursive step: Add the current element and call the function with the next index.
    return arr[index] + recursiveSum(arr, n, index - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = recursiveSum(a, n, n - 1);

    printf("%d", sum);

    return 0;
}
