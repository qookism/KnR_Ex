
/*  the c programing language 2nd   */
/*  ex 1-23                         */
#include <stdio.h>
#define MAXLINE 1000    /*maximum input line length */
#define TRUE    1
#define FALSE   0
#define START   0
#define END     1

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim -1 && (c=getchar()) !=EOF && c!='\n'; ++i)
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

int main()
{
    int len;
    int max;
    char linein[MAXLINE];
    int slash[2];
    int star[2];

    max = 0;
    while((len = get_line(linein, MAXLINE)) > 0)
    {
        for (int i = 0; i < len; i++)
        {

            if ((slash[START] == 0) || (star[START] == 0))
            {
                if (linein[i] == '/')
                {
                    slash[START] = i;     /* when first character is /, error */
                    continue;
                }

                if (((i - slash[START]) == 1) && (linein[i] == '*'))
                {
                    star[START] = i;
                    linein[i] = linein[i-1] = ' ';
                    continue;
                }

                if (((i - slash[START]) == 1) && (linein[i] != '*'))
                {
                    slash[START] = 0; /* reset start flag */
                }
            }

            if (slash[START] && star[START])
            {

                if (linein[i] == '*')
                {
                    star[END] = i;
                    continue;
                }

                if ((i - star[END] == 1) && (linein[i] == '/'))
                {
                    slash[END] = i;
                    continue;
                }

                if (((i - star[END]) == 1) && (linein[i] != '/'))
                {
                    star[END] = 0; /* reset start flag */
                }

                if ((slash[END] == 0) && (star[END] == 0))
                {
                    linein[i] = ' ';
                    continue;
                }

                if (slash[END] && star[END])
                {
                    linein[slash[END]] = linein[star[END]] = ' ';
                    slash[START] = star[START] = slash[END] = star[END] = 0;
                }
               

            }

            
        }

        printf("%s" , linein);
        
     
    }
  
    return 0;
}


