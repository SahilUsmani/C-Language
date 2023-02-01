

unsigned int string_length(char s[])
{
    unsigned int i = 0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}