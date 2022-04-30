#include<stdio.h>

void leapyear(int year)
{
  if(year % 100 == 0) 
    {
        if(year%400 == 0)
        {
        printf("LEAP YEAR");
        }
        else 
        {
            printf("NOT LEAP YEAR");
        }
    }
    else if(year%4 ==0)
    {
       printf(" LEAP YEAR");
    }
    else 
    {
        printf("NOT LEAP YEAR");
    }
}
int main()
{
    int year;
    printf("Enter Year\n");
    scanf("%d",&year);
    leapyear(year);
    return 0;
}