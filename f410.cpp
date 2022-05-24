#include<stdio.h>
int cmp(int a,int b){//a=a[i],b=a[j]
	if(/*恶*/)//璝a计 b案计 
		return /*恶*/;
	if(/*恶*/)////璝a案计 b计 
		return /*恶*/;
	if(/*恶*/){//璝ab常琌案计 
		if(a>b) 
			return /*恶*/;
		else
			return /*恶*/;
	} 
	if(/*恶*/)//璝ab常琌计 
		if(a>b) 
			return /*恶*/;
		else
			return /*恶*/;
}
int main(){
	int n;
	int a[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(cmp(a[i],a[j])){//if(a>b) if(1) if(0)
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
 } 
