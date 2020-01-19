/*  the c programing language 2nd   */
/*  ex 1-24                         */


#include <stdio.h>

#include <stdio.h>
#define MAXLINE 1000    /*maximum input line length */
#define TRUE    1
#define FALSE   0
#define START   1
#define END     -1
#define NONE    -1

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


int main(void)
{
    int len;
    int max;
    char linein[MAXLINE];
    int brackets;
    int braces;
    int square_brackets;
    int quote;
    int ret;

    max = 0;
    while((len = get_line(linein, MAXLINE)) > 0)
    {
        for (int i = 0; i < len; i++)
        {

           if (linein[i] == '(')
               brackets += START;
           if (linein[i] == ')')
               brackets += END;

           if (linein[i] == '{')
               braces += START;
           if(linein[i] == '}')
               braces += END;

           if(linein[i] = '[') 
            square_brackets += START;
           if(linein[i] = ']') 
            square_brackets += END;
            
           if(linein[i] = '"') 
            quote += START;
        }
    }
    if (brackets)
        ret = FALSE;
    else if (square_brackets)
        ret = FALSE;
    else if (braces)
        ret = FALSE;
    else if (quote % 2)
        ret = FALSE;
    else
        ret = TRUE;

    if(ret) 
        printf("valid\n");
    else
        printf("invalid\n");

    return 0;
}