#include <stdio.h>
#include <string.h>

int main()
{
    char word1[] = "abc";
    char word2[] = "pqr";

    char result[100];
    int i = 0, j = 0, k = 0;

    while(word1[i] != '\0' && word2[j] != '\0')
    {
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }

    while(word1[i] != '\0')
    {
        result[k++] = word1[i++];
    }

    while(word2[j] != '\0')
    {
        result[k++] = word2[j++];
    }

    result[k] = '\0';

    printf("Merged String: %s\n", result);

    return 0;
}
