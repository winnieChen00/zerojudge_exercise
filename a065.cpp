#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char str[100];
	scanf("%s",str);
	for(int i=0;i<6;i++)
		printf("%d",abs(str[i+1]-str[i]));
}
