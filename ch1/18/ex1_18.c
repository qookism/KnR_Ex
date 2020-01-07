/*  the c programing language 2nd   */
/*  ex 1-18                         */
#include <stdio.h>
#define MAXLINE 1000    /*maximum input line length */
#define TRUE    1
#define FALSE   0

int get_line(char line[], int maxline);
void copy( char to[], char form[]);
void line_process(char line[], int len);

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
        line_process(longest, len);

        if (len > 2) // remove empty line
        {
            printf("%s", longest);
        }
        
        /*
        if(len > max)
        {
            max = len;
            copy(longest, line);
            printf("%s", longest);
        }
        */
    }

    /*
    if (max > 0)
    {
        printf("%s", longest);
    }
    */

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

void copy(char to[], char form[])
{
    int i;

    for ( i = 0; (to[i] = form[i]) != '\0'; ++i)
    {
        ;
    }


}
 /* remove blank or tab space in the line*/
void line_process(char line[], int len)
{
    int nblank = 0;
    for (int i = (len - 1) ; i > 0 ; --i)  
    {
        if (line[i - 1] != ' ' && line[i - 1] != '\t')
        {
            break;
        }
        else if (line[i - 1] == ' ' || line[i - 1] == '\t')
        {
            line[i] = '\0';
            line[i-1] = '\n';
        }
    }
}