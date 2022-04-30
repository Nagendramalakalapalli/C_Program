#include<stdio.h>
int flag = 0;

void prime_not(int n )
{
    for(int i = 2; i<(n/2); i++)
    {
        if(n%i == 0)
        {
            print("NOT PRIME-NUMBER");
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("PRIME-NUMBER");
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    prime_not(n);
    
    return 0;
}