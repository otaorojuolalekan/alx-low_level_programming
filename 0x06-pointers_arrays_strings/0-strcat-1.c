char *_strcat(char *dest, char *src)
{
    int i = 0, len;
    
    // while (dest[i] != '\0')
    // {
    //     i++;
    // }
    
    len = _strlen(dest);
    printf("length of dest = %d\n", len);
    
    while (src[i] != 0)
    {
        dest[i+len] = src[i];
        i++;
    }
    
    dest[i+len] = '\0';
    return (dest);
}