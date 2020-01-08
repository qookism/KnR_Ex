#include <stdio.h>
/* count digits, white space, others */

#define MAXLEN  50
main()
{
    int c, i, j, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    int nword = 0;
    int nwordhistogram[MAXLEN];
    for (i = 0; i < 10; ++i)
        ndigit[i] = nwordhistogram[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
            ++nwordhistogram[nword];
            nword = 0;
        }
        else
        {
            ++nother;
            nword++;
        }
        

    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
           nwhite, nother);
    printf("length of words histogramn\n");

    printf(">");
    for (i=MAXLEN; i>0; --i)
    {
        printf("%2d ", i);
        for(j=1; j<10; ++j)
        {
            if(nwordhistogram[j] >= i)
                printf("* ");
            else
            {
                printf("  ");
            }
        }
            
        printf("\n");
    }

    printf("   1 2 3 4 5 6 7 8 9");
}