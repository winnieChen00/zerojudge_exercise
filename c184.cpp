#include <iostream>
using namespace std;

int sof (int n) {
	int q=0;                                                                    //加入因數 1
	for(int i=1;i<n;i++){
		if(n%i==0)
			q=q+i;
	}
	return q;
}

int main () {
	int n;
    while (cin >> n,n) {                                
        if(n==sof(n))
			cout<<"="<<n<<endl; 
        else {
            if (n == sof(sof(n)))                        //若 m 的真因數和為 n
                cout << sof(n) << endl;              // m 即是 n 的友好數
            else                                //否則
                cout << "0"<<endl;                  // n 沒有友好數
        }
    }
}
