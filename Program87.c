#include<stdio.h>
void display(int ino)
{
    int icnt = 0;

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("%d\t",icnt);
    }
    printf("\n");
}
int main()
{
    int ivalue = 0;
    printf("enter the count : \n");
    scanf("%d",&ivalue);
    display(ivalue);
    
    return 0;
}