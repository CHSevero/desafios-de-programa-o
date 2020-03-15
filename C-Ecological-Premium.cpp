#include <iostream>
#include <vector>

using namespace std;

int main(){
	int test_cases;
	int farmers;
	cin >> test_cases;

	int farmyard;
	int animals;
	int friendliness;
	int sum = 0;	
	vector <int> results;
	for(int i=0; i < test_cases; i++){
		cin >> farmers;
		sum = 0;
		for(int j=0; j < farmers; j++){
			cin >> farmyard >> animals >> friendliness;
			sum += farmyard*friendliness;
		}
		results.push_back(sum);
	}

	for(int i=0; i < results.size(); i++){
		cout << results[i] << endl;
	}
	return 0;
}
