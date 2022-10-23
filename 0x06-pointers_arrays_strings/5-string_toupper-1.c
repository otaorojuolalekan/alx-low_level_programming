int _is_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (1);
    else
        return (0);
}

char *string_toupper(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (_is_lower(str[i]))
            str[i] = (str[i]-32);
        i++;
    }
    return (str);
}