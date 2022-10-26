#include "main.h"

int _is_lower(char ch);

char *cap_string(char *str)
{
/*    // while (str[i] != '\0')
    // {
    //     {
    //         if (_is_lower(str[i+1]))
    //         {
    //             str[i+1] = str[i+1] - 32;
    //         }
    //     }
        
    //     i++;
    
    // }
 */   
    int i,j;
    char *sep = "\t\n ,.;!?\"(){}";
    
    for (i = 0; str[i] != '\0'; i++)
        for (j = 0; sep[j] != '\0'; j++)
            if (str[i] == sep[j])
                if (_is_lower(str[i+1]))
                    str[i+1] = str[i+1] - 32;
    return (str);
}

int _is_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (1);
    else
        return (0);
}
