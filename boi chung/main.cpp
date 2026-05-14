#include <bits/stdc++.h>
	using namespace std;
	long long boi(long long a, long long b,long long c){
		return a*b/c;
	}
	long long ucln (long long a, long long b){
		while (b!=0){
			long long c=a%b;
			a=b;
			b=c;
		}
		return a;
	}
	int main (){
		int T; cin >> T; while (T--){
			long long a, b,c;
			cin>> a >> b;
			if (a<b) {
				c=a;
				a=b;
				b=c;
			}
			else c=0;
			cout << boi(a,b,ucln(a,b)) <<" "<< ucln (a,b)<< endl;	
		}
	}
    