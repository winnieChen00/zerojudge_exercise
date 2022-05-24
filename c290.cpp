#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char in[1000];
	int odd=0,even=0;
	scanf("%s",in);
	for(int i=0;i<strlen(in);i++){
		if(i%2)
			odd+=in[i]-'0';
		else
			even+=in[i]-'0';
	}
	printf("%d",abs(odd-even));
} 
