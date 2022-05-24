#include<stdio.h>
int a[500000]={};
int main(){
	int n;
	int find=0;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(find<n){
		while(a[find]!=-1){
			int x=find;
			find=a[find];
			a[x]=-1;
		}
		count=count+1;
		while(a[find]==-1)
			find=find+1;
	}
	printf("%d",count);
}
