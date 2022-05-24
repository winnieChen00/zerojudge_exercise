#include<stdio.h>
int main(){
	int a[50][50]={};
	int n;
	int direction;
	int x,y;
	int move=1;
	int count=0;
	scanf("%d",&n);
	scanf("%d",&direction);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	x=n/2;
	y=n/2;
	while(count<n*n){
		for(int j=0;j<2;j++){
			for(int k=0;k<move;k++){
				printf("%d",a[x][y]);
				if(direction==0)
					y=y-1;
				else if(direction==1)
					x=x-1;
				else if(direction==2)
					y=y+1;
				else if(direction==3)
					x=x+1;
				count=count+1;
				if(count==n*n)
					return 0;
			}
			if(direction==3)
				direction=0;
			else
				direction++;
		}
		move=move+1;
	}
	
}
