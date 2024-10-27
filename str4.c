#include<stdio.h>
int main()
{
    int i;
    char str1[i];
    char str2[i];
    gets(str1);
    gets(str2);
    while (str1[i]!='\0')
       str2[i]=str1[i];
       i++;
      
        printf("%s",str2[i]);
        return 0;
}