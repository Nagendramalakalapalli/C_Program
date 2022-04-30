#include<stdio.h>
#include <conio.h>
 float avg=0, sum=0;
 int maix_min_array(int *a,int n)
 {
 	int min,max,i;
 	min=a[0];
    max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    printf("Min of array is : %d \n",min);
    printf("Max of array is : %d",max);
 }

 int avg_sum_array(int *a, int  n)
 {
     for (int i=1 ; i<= n ; i++)
    {
        sum += a[i] ;
        avg = sum / n ;
    }
        printf("Sum of Array : %f \n",sum) ;
        printf("Average of Array : %f \n ",avg) ;
 } 

 int count_elements(int *a, int n)
 {
     int n= sizeof(a)/sizeof(int);
     return n;
 }

int main()
{
    int a[1000],i,n;
    
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    maix_min_array(a,n);
    avg_sum_array(a,n);
    count_elements(a,n);
}