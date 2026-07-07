#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char s[], char t[])
{
    if(strlen(s) != strlen(t))
        return false;

    int freq[26] = {0};

    for(int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";

    if(isAnagram(s, t))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
