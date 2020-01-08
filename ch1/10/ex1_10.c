#include <stdio.h>

int main()
{

    int c, it, in, ib;
    it = in = ib = 0;
    int i = 0;

    char str[100];

    while(1)
    {
        c = getchar();

        if(c == EOF)
            break;

        if(c == '\t')
        {
            c = '\\';
            str[i++] = c;
            c = 't';
            str[i++] = c;
        }
        else if(c == '\b')
        {
            c = '\\';
            str[i++] = c;
            c = 'b';
            str[i++] = c;
        }
        else if(c == '\\')
        {
            c = '\\';
            str[i++] = c;
            c = '\\';
            str[i++] = c;
        }
        else
            str[i++] = c;





    }

    printf("%s\n", str);

    return 0;
}
