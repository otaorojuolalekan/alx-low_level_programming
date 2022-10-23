#include "main.h"
//  ------------------------------------

char *cap_string(char *str)
{
    int i;
    
    while (str[i] != '\0')
    {
        if (str[i] == '\n' || str[i] == '\t' || str[i] == 32 || str[i] == 44 || str[i] == 59 || str[i] == 46 || str[i] == 33 || str[i] == 63 || str[i] == 34 || str[i] == 40 || str[i] == 41 || str[i] == 123 || str[i] == 125)
        {
            if (_is_lower(str[i+1]))
            {
                str[i+1] = str[i+1] - 32;
            }
        }
        
        i++;
    
    }
    return (str);
}
