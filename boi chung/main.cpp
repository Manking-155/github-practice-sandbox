#include <bits/stdc++.h>
	using namespace std;
	long long boi(long long a, long long b,long long c){
		return a*b/c;
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
			cout << boi(a,b,__gcd(a,b)) <<" "<< __gcd(a,b)<< endl;	
		}
	}