#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    char a[50];
    
    fgets(a, sizeof(a), stdin);
    
    for(int i=1;a[i]!='\n';i++){
        printf("%d", abs(a[i]-a[i-1]));
    }
    return 0;
}
