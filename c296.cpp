
#include<stdio.h>
int main() {
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int ans=0;
    for (int i = n-k+1; i <= n; i++) {
        ans=(ans+m)%i;
    }
    printf("%d",ans+1);
}



/*
int main() {
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
	int c=0;
	int a[10000]={};
	for(int i=0;i<k;i++){
		for(int j=0;j<m;j++){
			c++;
			if(c==n+1)
				c=1;
			if(a[c]==-1){
				j--;
			}

		}
		a[c]=-1;
	}
	while(a[c]==-1){
		c++;
		if(c==n+1)
			c=1;
	}
	printf("%d",c);
	
}*/

