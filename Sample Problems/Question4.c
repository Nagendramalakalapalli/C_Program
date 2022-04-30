#include <stdio.h>
int gcd(int n1,int n2){
    int GCD;
    for(int i=1;i<=n1 && i<=n2;++i){
        if(n1%i==0 && n2%i==0){
            GCD= i;
        }
    }
    printf("GCD: %d\n",GCD);
}


int lcm(int n1,int n2)
{
    int res;
    res = (n1 > n2) ? n1 : n2;

	while (1) {
		if (res % n1 == 0 && res % n2 == 0) {
			printf("The LCM obtained from %d and %d is %d.", n1, n2, res);
			break;
		}
		res++;
	}
}

int main(){
    int num1,num2;
    printf("First number: ");
    scanf("%d",&num1);
    printf("Secound number: ");
    scanf("%d",&num2);
    gcd(num1,num2);
    lcm(num1, num2);
    return 0;
}