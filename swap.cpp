#include<iostream>

using namespace std;
void swap(int *a, int *b){
     int c = *a;
     *a = *b;
     *b = c;
     return;
}

int main(){
    int a, b;
    cin>>a>>b;
    swap(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
