
char *string_cat(char s1[], char s2[])
{
    int i = 0;
    int j = 0;

    while(s1[i] != '\0')
    {
        i++;
    }
    while(s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}