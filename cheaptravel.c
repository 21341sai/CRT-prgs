#include<stdio.h>
int main(){
	int n,m,a,b,min;
	scanf("%d %d %d %d",&n,&m,&a,&b);
	if((n>=1 && n<=1000) && (m>=1 && m<=1000) && (a>=1 && a<=1000) && (b>=1 && b<=1000)){
	
	if(m*a<b){
		printf("%d",n*a);
		
	}
	else{
		printf("%d",((n/m)*b+(n%m)*a)<b?(n%m)*a:b);
}
}
}
