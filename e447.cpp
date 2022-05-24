#include <stdio.h> 
int main(){
	int front = 0, rear = 0;
	int que[100]={};
	int N;
	int k,a;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%d", &k);
		if(k==1){
			scanf("%d",&a);
			que[rear++]=a;
		}
		else if(k==2){
			if(front==rear)
				printf("-1\n");
			else
				printf("%d\n",que[front]);
		}
		else{
			if(front!=rear)
				que[front++]=0;
		}
			
	}
}
