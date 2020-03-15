#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
	int t;
	cin >> t;
	string a;
	int first = true;
	int b;
	int sum = 0;
	vector <int> v;
	for(int i=0; i < t; i++){
		cin >> a;
		if (a.compare("donate") == 0){
			b = 0;
			cin >> b;
			sum += b;
		}else{
			v.push_back(sum);
		}
		
	}
	for(int i=0; i < v.size(); i++){
		cout << v[i] << endl;
	}

	return 0;
}



