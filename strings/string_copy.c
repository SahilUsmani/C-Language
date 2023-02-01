
char *string_copy(char s1[], char s2[])
{
    int i = 0;
    int j = 0;
    // while((s1[i] = s2[i]))
    // {
    //     i++;
    // }
    // return s1;

    for(i=0; s2[i]!='\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    return s1;
}