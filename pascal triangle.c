#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of n: ");
    scanf("%d", &n);
for (int i = 0; i < n; i++)
{
        int num = 1;
for (int j = 0; j < n - i - 1; j++)
{
            printf("  ");
        }
        for (int k = 0; k <= i; k++) 
        {
            printf("%4d", num);
            num = num * (i - k) / (k + 1); 
        }
        printf("\n");
    }
return 0;
}
