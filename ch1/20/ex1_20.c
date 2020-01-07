/*  the c programing language 2nd   */
/*  ex 1-20                         */
/* hyokook kim                      */
#include <stdio.h>
#define MAXLINE 100

int get_line(char *, int);

int main()
{
    int len;
    int nblank;
    char line[MAXLINE];
    char longest[MAXLINE];

    nblank = 0;
    while((len = get_line(line, MAXLINE)) > 0)
    {
        for (int i = 0; i < len; i++)
        {
            if(line[i] == ' ')
            {
                nblank++;
            }
            else if (/* condition */)
            {
                /* code */
            }
            
        }
        
        // 빈칸이 4개면 탭 1개로 변경
        // 빈칸 개수를 저장하는 변수 추가
        //  

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