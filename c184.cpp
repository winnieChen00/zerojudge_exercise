#include <iostream>
using namespace std;

int sof (int n) {
	int q=0;                                                                    //�[�J�]�� 1
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
            if (n == sof(sof(n)))                        //�Y m ���u�]�ƩM�� n
                cout << sof(n) << endl;              // m �Y�O n ���ͦn��
            else                                //�_�h
                cout << "0"<<endl;                  // n �S���ͦn��
        }
    }
}
