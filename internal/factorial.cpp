#include <iostream>
using namespace std;
int fact(int n){
	return n==0?1:n*fact(n-1);
}
int main(){
	int n,f;
	cout <<"Enter The Number"<<endl;
	cin >> n;
	f = fact(n);
	printf("%d! = %d",n,f);
	
}
