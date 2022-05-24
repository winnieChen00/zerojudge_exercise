#include<stdio.h>
int main(){
	int a,b,c;
	//scanf("%d%d%d",&a,&b,&c);
	a=0;
	b=0;
	c=0;
	if(a)
		a=1;
	if(b)
		b=1;
	if((a&b)==c)
		printf("AND\n");
	if((a|b)==c)
		printf("OR\n");
	if((a^b)==c)
		printf("XOR\n");
	if(a==0 && b==0 && c==1)
	printf("IMPOSSIBLE\n");
} 
