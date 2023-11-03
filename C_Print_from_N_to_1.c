/* #include <stdio.h> // ekhane spech print hoy
void fun(int n, int i)
{
    if (i == n + 1)
        return;
    fun(n, i + 1);
    printf("%d ", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n, 1);
    return 0;
} */
#include <stdio.h>

void printNumbers(int N) {
    if (N == 1) {
        printf("%d", N);
    } else {
        printf("%d ", N);
        printNumbers(N - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}
