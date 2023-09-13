#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int temp = arr[0];
    int i = 0;

    for (int j = 1; j <= n; j++)
    {
        while (temp > sum && i < j - 1)
        {
            temp -= arr[i];
            i++;
        }

        if (temp == sum)
        {
            printf("Subarray found between indices %d and %d\n", i, j - 1);
            return 0;
        }

        if (j < n)
        {
            temp += arr[j];
        }
    }

    printf("No subarray found with the given sum.\n");
    return 0;
}
