#include <stdio.h>
/* count digits, white space, others */
main()
{
    int c, i, nwhite, nother;
    int ndigit[128];
    nwhite = nother = 0;
    int nword = 0;
    for (i = 0; i < 128; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'z')
        {
            ++ndigit[c];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
        

    }

    printf("alphabet =\n");
    for (i = 'A'; i <'z' ; ++i)
    {
        if(i > 'Z' && i < 'a')
            continue;

        printf("%c : %d\n", i, ndigit[i]);

    }
    printf(", white space = %d, other = %d\n",
           nwhite, nother);
}