#include <stdio.h>
int Quadrant(int co1, int co2)
{
    if(co1 > 0 && co2 > 0)
		printf("1st Quco1drco1nt\n");
	else if(co1 < 0 && co2 > 0)
		printf("2nd Quco1drco1nt\n");
	else if(co1 < 0 && co2 < 0)
		printf("3rd Quco1drco1nt\n");
	else if(co1 > 0 && co2 < 0)
		printf("4th Quco1drco1nt\n");
	else
		printf("Origin\n"); 
}
int main()
{
	int co1,co2;
    printf("Enter the coordinate-1 and coordinate-2 :");
	scanf("%d %d",&co1,&co2);
    Quadrant(co1,co2);
	
	return 0;
}