#include <stdio.h>
int main()
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}