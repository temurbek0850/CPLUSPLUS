#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c="";
	cin>>a>>b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int al = a.length(),bl = b.length(), maxl;
	if (al>bl) maxl = al; else maxl = bl;
	int s,q=0;
	for(int i=0; i<maxl; i++){
		char cc,dd;
		if (i<al) cc=a[i]; else cc=48;
		if (i<bl) dd=b[i]; else dd=48;
		s=(cc-48)+(dd-48)+q;
		q = s/10;
		s%=10;
		c = char(s+48)+c;
	}
	if(q>0) c = char(q+48)+c;
	cout<<c;
}
