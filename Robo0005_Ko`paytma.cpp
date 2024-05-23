#include<iostream>
#include<cmath>
using namespace std;

int get(int n){
	int s = 0;
	bool b = false;
	b = n<0?false:true;
	n = n<0?-n:n;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			s+=2;
		}
		if(i*i==n)s--;
		if(i*i==n && b) s++;
	}
	return s;
}

int main(){
	int z;
	cin>>z;
	if(z==0){
		cout<<"-1";
	} else {
		cout<<get(z);
	}
}
