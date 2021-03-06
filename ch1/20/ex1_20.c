/*  the c programing language 2nd   */
/*  ex 1-20                         */
/* hyokook kim                      */
#include <stdio.h>
#define MAXLINE 100
#define TABSIZE 8

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}


int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        for (int i = 0; i < len; i++)
        {
            if(line[i] == '\t')
            {

                len += TABSIZE;

                for (int j = len; j > i + TABSIZE; j--)
                {
                    line[j-1] = line[j - TABSIZE];
                }

                for (int k = i; k < i + TABSIZE; k++)
                    line[k] = ' ';
            }
        }

        printf("%s", line);

    }


    return 0;
}