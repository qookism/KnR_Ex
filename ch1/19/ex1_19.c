/*  the c programing language 2nd   */
/*  ex 1-19                         */
/* hyokook kim                      */
#include <stdio.h>
#define MAXLINE 1000    /*maximum input line length */
#define TRUE    1
#define FALSE   0

int get_line(char line[], int maxline);
void line_process(char line[], char reverse[], int len);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char reverse[MAXLINE];

    max = 0;
    while((len = get_line(line, MAXLINE)) > 0)
    {

        line_process(line, reverse, len);

        printf("%s", reverse);
    }



    return 0;
}


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

/* reverse the character stirng */
void line_process(char line[], char reverse[], int len)
{
    int lineend = len - 2;
    int i, j;

    for (i = 0, j = lineend ; lineend >= 0 ; ++i, --lineend)  
    {
        reverse[i] = line[lineend];
    }

    reverse[len - 1] = '\n';
    reverse[len] = '\0';
}