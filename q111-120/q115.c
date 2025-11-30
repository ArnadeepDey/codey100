#include <stdio.h>
#include <string.h>

void checkAnagram(char *s, char *t)
{
    int n1 = strlen(s);
    int n2 = strlen(t);

    if (n1 != n2)
    {
        printf("Not Anagram\n");
        return;
    }

    int count[26] = {0};

    for (int i = 0; i < n1; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram\n");
            return;
        }
    }

    printf("Anagram\n");
}

int main()
{
    char s[1000], t[1000];

    printf("Enter first string s: ");
    scanf("%s", s);

    printf("Enter second string t: ");
    scanf("%s", t);

    checkAnagram(s, t);

    return 0;
}
