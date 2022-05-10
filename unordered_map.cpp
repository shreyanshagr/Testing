#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	unordered_map<int,string> um;
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp=0;
		cin>>temp;
		cin>>um[temp];
	}
	for(auto &it : um)
		cout<<it.first<<" "<<it.second<<endl;
	}


