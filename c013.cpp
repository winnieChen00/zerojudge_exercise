#include<iostream>
using namespace std;
int main(){
	int n,A,F;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A>>F;
		for(int j=0;j<F;j++){
			for(int k=1;k<=A;k++)
			{
				for(int p=1;p<=k;p++)
					cout<<k;
				cout<<endl;
			}
			for(int k=A-1;k>0;k--)
			{
				for(int p=k;p>0;p--)
					cout<<k;
				cout<<endl;
			}
			cout<<endl;
		 } 
	}
} 
