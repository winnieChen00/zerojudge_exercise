#include<stdio.h>
int n;

int F(int a){ //int a=n;//int n=n;
	if(a<2)
		return 1;
	return F(a-1)+F(a-2);//¦^¶Ç 
}

int main(){
//	while(scanf("%d",&n)!=EOF)
		printf("%d\n",F(n));
//	return 0;
}

