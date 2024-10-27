#include<stdio.h>
int main()
{
    char name[50];
    printf("enter your name\n");
    fgets(name,sizeof (name),stdin);
    printf("%s",name);
    return 0;
}