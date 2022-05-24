#include <iostream>
using namespace std;

int sof (int n) {
	int q=0;                                                                    //计 1
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
            if (n == sof(sof(n)))                        //璝 m 痷计㎝ n
                cout << sof(n) << endl;              // m 琌 n ね计
            else                                //玥
                cout << "0"<<endl;                  // n ⊿Τね计
        }
    }
}
