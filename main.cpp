#include<stdio.h>

int main()
{
    int i=0;
    int l=11;
    char c;
    char s1[l];
    printf("enter the string\n");
    gets(s1);
    do{
        c=s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=c;
        i++;
    }
    while(i<l/2);
    printf("%s",s1);

}
