#include<bits/stdc++.h>
using namespace std;


int add(int a,int b){
		if(b==0)
			return a;
		int c=a^b;
		int d=(a & b)<<1;
		return add(c,d);
	}
int main(){
	
	cout<<add(10,11);

	return 0;
}