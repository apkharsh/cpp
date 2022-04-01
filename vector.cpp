#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

	vector<int> v;
	v.push_back(6);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);


	// For loop method
	// for(int i = 0 ;i<v.size() ; i++){
	// 	cout << v[i] << endl;
	// }


	// //iterator method
	// vector<int>::iterator it;
	// for(it=v.begin(); it!=v.end();it++){
	// 	cout << *it << endl;
	// }

	// //auto keyword method
	// for(auto element:v){
	// 	cout << element << endl;
	// }

	v.pop_back();

	// creating another vector and swapping its value with vector v
	vector<int> v2(3,50);

	swap(v,v2);
	sort(v.begin(),v.end());
	for(auto element:v){
		cout << element << endl;
	}

	for(auto element:v2){
		cout << element << endl;
	}


    return 0;

}

//Contributed by apkharsh