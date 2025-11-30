#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkAnagram(char str1[], char str2[])
{
    int count[26] = {0};
    int i;

    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++)
    {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s1[] = "hello";
    char s2[] = "world";

    if (checkAnagram(s1, s2))
    {
        printf("Strings are anagrams.\n");
    }
    else
    {
        printf("Strings are NOT anagrams.\n");
    }
    return 0;
}
