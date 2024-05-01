#include<stdio.h>

void display(int irow, int icol)
{
    int i = 0, j = 0;
    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}

int main()
{
    int iNo1  = 0,  iNo2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d",&iNo1);

    printf("Enter number of columns: \n");
    scanf("%d",&iNo2);

    display(iNo1,  iNo2);
    
    return 0;
}
