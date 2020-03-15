#include<iostream>
using namespace std;
#include <cmath>

int main(){
	int t;
	cin >> t;
	int n[t], m[t];
	for(int i=0; i < t; i++){
		cin >> n[i] >> m[i];
	}

	for(int i=0; i < t; i++){
		int r1 = n[i]/3;
		int r2 = m[i]/3;
		cout << r1 * r2 << endl;
	}

	return 0;
}