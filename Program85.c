#include<stdio.h>
void display()
{
    int icnt = 0;
    for(icnt = 1; icnt <= 6; icnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    display();
    
    return 0;
}