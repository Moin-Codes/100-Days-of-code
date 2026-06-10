#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3, 4};
    int n = 4;

    for(int i = 1; i < n; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }

    printf("Running Sum: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
