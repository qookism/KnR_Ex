#include <stdio.h>

int main()
{

    int c, it, in, ib;
    it = in = ib = 0;

    while(1)
    {
        c = getchar();

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
    }

    printf("number of tabs : %d\n", it);
    printf("number of newline : %d\n", in);
    printf("number of blank : %d\n", ib);

    return 0;
}
