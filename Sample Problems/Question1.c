#include <stdio.h>

int main()
{
    int s1, s2,s3;
    int sum = s1*s1 + s2*s2;
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1 == s2 && s2 == s3)
    {
        printf("Equilateral Triangle");
    }
    else if (s1 == s2 || s2 == s3|| s3==s1)
    {
        printf("Isosceles Triangle");
    }
    else if (sum == s3*s3)
    {
        printf("Right angle Triangle");
    }
    else 
    {
        printf("Scalen Triangle");
    }
    
        return 0;
}