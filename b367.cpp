#include<iostream>
using namespace std;
int main(){
	int a[121]={};
	int t,n,m;
	int check;
	cin>>t;
	for(int k=0;k<t;k++){
		cin>>n>>m;
		check=1;
		for(int i=0;i<n*m;i++)
			cin>>a[i];
		for(int i=0;i<n*m/2;i++)
			if(a[i]!=a[n*m-1-i])
				check=0;
		if(check)
			cout<<"go forward"<<endl;
		else
			cout<<"keep defending"<<endl;
	}
	
	
}
