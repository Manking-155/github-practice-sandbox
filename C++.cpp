#include <bits/stdc++.h>
using namespace std;	
int mang[10000];
int snt(int a){
	if (a==2 || a==3) return a;
	for (int i=2; i*i<=a; i++){
		if (a%i==0) return 0;
	}
	return a;
}
int main (){
int hi=0;
	for (int i=2; i<=10000; i++){
		if (snt(i)!=0) {
			mang[hi]=i;
			hi+=1;
		}
	}
	int T; cin>>T;
	while (T--){
		int N; cin >> N;
		int dem=0;
		for (int i=0; i<hi ;){
			if (N%mang[i]==0) {
				N/=mang[i];
				dem+=1;
			if (N%mang[i]!=0) {
				cout << mang[i] <<" "<< dem <<" "; 
				dem=0;
			}
			}
			else i++;
		}
		cout << endl;
	}
}
