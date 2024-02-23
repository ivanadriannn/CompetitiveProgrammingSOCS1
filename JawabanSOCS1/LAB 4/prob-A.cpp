#include <stdio.h>

int main()
{
    int n, loan[1001], totalLoan = 0;
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &loan[i]);
        getchar();
        totalLoan += loan[i];
    }

    printf("%d\n", totalLoan);

    return 0;
}
