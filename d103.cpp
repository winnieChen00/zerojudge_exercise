#include <string.h>
#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    char a[15];
    int sum=0;
    int b=1;
    while(fgets(a, sizeof(a), stdin)){
    	//printf("%s\n", a);
        for(int i=0;i<11;i++){
            if(a[i]!='-'){
                sum=sum+b*(a[i]-'0');
                b++;
        	}
        }
        printf("%d\n", sum);
    }
    return 0;
}
