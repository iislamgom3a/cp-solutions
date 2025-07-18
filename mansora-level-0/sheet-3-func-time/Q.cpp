// Problem: Q. Reverse Words
// Contest: Codeforces - Sheet #4 (Strings)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

vector<string> split(const string& s, char del){
	vector<string> tokens; 
	size_t start =0; 
	size_t end = s.find(del); 
	while(end != string::npos){
			tokens.push_back(s.substr(start, end-start));
			start = end + 1 ; 
			end = s.find(del, start); 
	}
	tokens.push_back(s.substr(start));
	return tokens; 
}


typedef long long ll;
int main(){
    fastio();
		string s; 
		getline(cin ,s); 
		vector<string> arr = split(s, ' '); 
		for(auto &i : arr){
			reverse(i.begin(), i.end());
		}
		for(unsigned i=0; i<arr.size()-1;i++){
			cout << arr[i] << sp ; 
		}
		cout << arr[arr.size()-1] << endl;
    return 0;
}
