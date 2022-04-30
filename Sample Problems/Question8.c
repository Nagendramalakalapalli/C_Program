#include<stdio.h>
#include<math.h>

 int Prime_Count(int l, int r)
 {
     int flag =0, c= 0;
     for(int i=l; i<=r; ++i){
		if(i==1)
			continue;
		flag = 0;
		for(int j=2; j<=sqrt(i);++j){
			
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			++c;
	}
    printf("No of Prime numbers between %d and %d are: %d\n",l,r,c);
 }

int main() {
	int lower,Upper;
	
	printf("Enter Lower Limit  : ");
	scanf("%d",&lower);
	printf("Enter Upper Limit  : ");
	scanf("%d",&Upper);
    Prime_Count(lower,Upper);
}