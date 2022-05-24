#include <stdio.h>



int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
	int P[1000000]={};
    int a;
    
    scanf("%d", &N);
    
    for(int i=0;i<N;i++){
        scanf("%d", &P[i]);
    }
    for(int i=N;i>0;i--){
            a=P[i];
            P[i]=P[i-1];
            P[i-1]=a;
        }
    for(int i=N;i>0;i--){
        printf("%d ", P[i]);
    }
    printf("\n");
    return 0;
}
