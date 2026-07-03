#include <stdio.h>

int main()
{
    int nums[] = {1, 1, 2, 2, 3, 4, 4};
    int n = 7;

    if(n == 0)
    {
        printf("Array is empty");
        return 0;
    }

    int j = 0;

    for(int i = 1; i < n; i++)
    {
        if(nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    printf("Array after removing duplicates:\n");

    for(int i = 0; i <= j; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nNumber of unique elements = %d", j + 1);

    return 0;
}
