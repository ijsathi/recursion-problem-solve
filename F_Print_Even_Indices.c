#include <stdio.h>

void printEvenIndicesInReverse(int arr[], int length, int index)
{
    // Base case: If the index is out of bounds, return.
    if (index < 0)
    {
        return;
    }

    // Check if the current index is even.
    if (index % 2 == 0)
    {
        printf("%d ", arr[index]);
    }

    // Recursively call the function with the previous index.
    printEvenIndicesInReverse(arr, length, index - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printEvenIndicesInReverse(arr, N, N - 1);

    return 0;
}
