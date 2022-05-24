#include<iostream>
using namespace std;
int main(){
	int n;
	int a[1000];
	bool b[1000]={};
	int sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			b[i]=1;
			a[i]=-a[i];
		}
		
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
				x=b[i];
				b[i]=b[j];
				b[j]=x;
			}
		}
	}

	for(int i=0;i<n-1;i++){
		if(b[i]!=b[i+1])
			sum++;
	}
	cout<<sum;
} 
