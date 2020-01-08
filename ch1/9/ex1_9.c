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
        else if(c == ' ')
        {
            if(ib == 0)
                ib = 1;
            else
            {
                ib=0;
                continue;
            }

        }

        str[i++] = c;



        /*
                if(c == '\t')
                    it++;
                else if(c == '\n')
                    in++;
                else if(c == ' ')
                    ib++;
                else if(c == EOF)
                    break;
                else
                    ;
                    */
    }

    printf("%s\n", str);

    return 0;
}
