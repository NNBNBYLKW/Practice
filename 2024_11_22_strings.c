#include <stdio.h>
#include <string.h>
#include <wchar.h>

main()
{
    int c=0,i=0;
    (char)c;
    char str[]={"����"};
    while (i < sizeof(str))
    {
        c=str[i];
        putchar (c);
        i++;
    }

    return 0;
}
