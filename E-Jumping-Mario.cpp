#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n_test;
	cin >> n_test;
	int n_walls;
	int high_jump;
	int low_jump;
	vector <int> cases_low;
	vector <int> cases_high;

	for(int i=0; i < n_test; i++){
		high_jump = 0;
		low_jump = 0;
		cin >> n_walls;
		int old_hight;
		int new_higt;

		cin >> old_hight;
		for(int j=0; j < n_walls-1; j++){
			cin >> new_higt;
			if(new_higt > old_hight){
				high_jump += 1;
			}else if(new_higt < old_hight) {
				low_jump += 1;
			}
			old_hight = new_higt;
		}
		cases_high.push_back(high_jump);
		cases_low.push_back(low_jump);
	}

	for(int i=0; i < n_test; i++){
		cout <<"Case "<< i+1 << ": " << cases_high[i] << " "<< cases_low[i] << endl;
	}
	return 0;
}