#include <stdio.h>

int a[100000]={};

int main(int argc, const char * argv[]) {
    //insert code here...
    int n, m;
    int l, r;
    int sum=0;
    int k;
    while(scanf("%d %d", &n ,&m)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d", &k);
            	a[i]=a[i-1]+k;

        }
        for(int i=0;i<m;i++){
        	scanf("%d %d", &l ,&r);
        	printf("%d\n", a[r]-a[l-1]);
		}

    }
    return 0;
}
