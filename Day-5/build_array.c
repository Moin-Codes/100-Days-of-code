#include <stdio.h>

int main()
{
    int nums[] = {0,2,1,5,3,4};
    int n = 6;

    int ans[6];

    for(int i = 0; i < n; i++)
    {
        ans[i] = nums[nums[i]];
    }

    printf("Result: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}
