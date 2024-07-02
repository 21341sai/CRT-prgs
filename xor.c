#include<stdio.h>
int xor(int n){
	if(n%4==1) return("%d",1);
	if(n%4==2) return("%d",n+1);
	if(n%4==3) return("%d",0);
	if(n%4==4) return("%d",n);
}
int main(){
	int l,u,x=0;
	printf("enter lower and upper limit:");
	scanf("%d %d",&l,&u);
	x=xor(u)^xor(l-1);
	printf("%d",x);
	
}
