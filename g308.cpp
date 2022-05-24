#include<iostream>
using namespace std;
int main(){
	int N,T;
	int a[1000]={};
	int b[1000]={};
	int sum=0;
	int x;
	cin>>N>>T;
	for(int i=0;i<N;i++)
		cin>>a[i];
	for(int i=0;i<N;i++)
		cin>>b[i];
	while(T!=-1){
		sum=sum+b[T];
		b[T]=0;
		x=T;
		T=a[T];
		a[x]=-1;
	}
	cout<<sum;
}
