#include<stdio.h>
int cmp(int a,int b){//a=a[i],b=a[j]
	if(/*���*/)//�Ya���_�� b������ 
		return /*���*/;
	if(/*���*/)////�Ya������ b���_�� 
		return /*���*/;
	if(/*���*/){//�Yab���O���� 
		if(a>b) 
			return /*���*/;
		else
			return /*���*/;
	} 
	if(/*���*/)//�Yab���O�_�� 
		if(a>b) 
			return /*���*/;
		else
			return /*���*/;
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
