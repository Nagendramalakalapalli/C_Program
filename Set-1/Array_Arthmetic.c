#include<stdio.h>

int *add(int *a ,int *b )
{       
  return ((*a) + (*b));
}

int *sub(int *a ,int *b )
{       
  return ((*a) - (*b));
}

int *mul(int *a ,int *b )
{       
  return ((*a) * (*b));
}

int *div(int *a ,int *b )
{       
  return ((*a) / (*b));
}

int (*ptr[4])(int, int) = {add, sub, mul, div};

int main()
{
    int a, b, option;
  
    print("Enter your choice 0 , 1, 2: ");
     scanf("%d", &option);

    if((option>=0)&&(option<=2))
     { 
       printf("%d",(*ptr[option])(a, b));
     }

    // printf("Enter  vaues of a and b :\n");
    // scanf("%d %d" &a, &b);
    // printf("%d\n", ptr(&a, &b));

    // printf("ADD = %d\n", add(&a,&b));
    // printf("SUB = %d\n", sub(&a,&b));
    // printf("MUL = %d\n", mul(&a,&b));
    // printf("DIV = %d\n", div(&a,&b));
    return 0;
}