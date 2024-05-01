#include<stdio.h>

void display(int ino)
{
    int icnt = 0;
    char ch = 'A';

    for(icnt = 1; icnt <= ino; icnt++, ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("Enter the count: \n");
    scanf("%d", &ivalue);

    display(ivalue);
    
    return 0;
}
