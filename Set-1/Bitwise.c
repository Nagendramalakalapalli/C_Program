#include<stdio.h>

int set_bit(int n, int l)
{
    n = n | (1 << l); 
    return n;    
}

int clear_bit(int n, int l)
{
    n = n & (~(1 << l));
    return n;
}

int flip_bit(int n, int l)
{
    n = n ^ (1 << l);
    return n;
}

int query_bit(int n, int l)
{
    n = (n &(1 << l));
    if(n >= 1)
    {
        return 1;
    }
    else 
    {
    return 0;
    }
}

int main()
{
    int num, loc;
    printf("Enter the Number \n");
    scanf("%x",&num);
    printf("Enter the Location \n");
    scanf("%d",&loc);
    printf("Set bit = %x\n",set_bit(num,loc));
    printf("Clear bit = %x\n",clear_bit(num,loc));
    printf("Flip bit = %x\n",flip_bit(num,loc));
    printf("Query bit = %x\n",query_bit(num,loc));

    return 0;
}



  

