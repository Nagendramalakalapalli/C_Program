#include<stdio.h>
#define PRESSED 0

static int s;
int sw0,sw1;
int main()
{
while (1)
{
printf("Enter the switch status : ");
scanf("%d", &sw0);
s -= sw0;
printf("Enter the switch status :");
scanf("%d", &sw1);



    if(s%2!= PRESSED)
    {
        printf("LED ON\n");
    }
    else 
    {
        printf("LED OFF\n");
    }
}
return 0;
}
