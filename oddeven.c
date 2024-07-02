#include<stdio.h>
//#include<conio.h>
int main ()
{
	int a,x;
//	b=~(a)+1;
	scanf("%d",&a);
	printf("%d",a);
	if(a&1==0){
		int x=a/2;
		if(x%2==0){
			printf("Yes");
		}
		else{
			printf("No");
		}
		
	}
	else{
		printf("No");
	}
	

}

//	printf("%d",b);

