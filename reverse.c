#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    char *rev;
    printf("Enter any string : ");
    scanf("%s",str);
    rev = strrev(str);
    printf("Reverse string is : %s",rev);
    return 0;
}
