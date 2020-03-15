#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a;
	vector <int> results;
	int m;
	int sum;
	cin >> a;

	while(a != 0) {
		sum = 0;
		while(a > 0){
			m= a%10;
			sum += m;
			a = a/10;
		}
		if(sum <= 9){
			results.push_back(sum);
			cin >> a;
		}else{
			a = sum;
		}
		
	}

	for(int i=0; i < results.size(); i++){
		cout << results[i] << endl;
	}

	return 0;
}	