#include<stdio.h>

int main()
{
    char s[50];int i;

    printf("Enter the string:\n");
    gets(s);

    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    s[i]='\0';

    printf("The lowercased string is:\n%s",s);

return 0;
}
