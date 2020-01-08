#include <stdio.h>
#define MAXLINE 1000    /*maximum input line length */

int get_line(char line[], int maxline);
void copy( char to[], char form[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = get_line(line, MAXLINE)) > 0)
    {

        copy(longest, line);

        if (len >= 80)
        {
            printf("%s", longest);
        }
    }


    return 0;
}
/* dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd*/

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

void copy(char to[], char form[])
{
    int i;

    for ( i = 0; (to[i] = form[i]) != '\0'; ++i)
    {
        ;
    }


}