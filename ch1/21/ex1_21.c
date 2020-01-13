/*  the c programing language 2nd   */
/*  ex 1-21                         */
/* hyokook kim                      */
#include <stdio.h>
#define MAXLINE 100

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
    int nblank;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {

        int nblank = 0;
        for (int i = 0; i < len ; i++)
        {
            if(line[i] == ' ')
            {
                nblank++;
            }
            else
            {
                nblank = 0;
            }

            if(nblank == 4)
            {
                i -= 3;
                len -= 3;

                line[i] = '\t';

                for( int j = i + 1 ; j < len ; j++)
                {
                    line[j] = line[j+3];
                }
                nblank = 0;

                line[len] = '\0';

            }
            
        }

        printf("%s", line);
        
       
    }


    return 0;
}