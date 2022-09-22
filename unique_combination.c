#include<stdio.h>
void main()
{
    int i,j,k;
    char a,b,c;
    printf("Enter 3 characters \n");
    scanf("%c %c %c",&a,&b,&c);
    for(i=a;i<=c;i++)
    {
        for(j=a;j<=c;j++)
        {
            for(k=a;k<=c;k++)
            {
                if(i==j||i==k||j==k)
                continue;
                else
                printf("\n%c %c %c",i,j,k);
            }
        }
    }
}
