#include <iostream>
#include<vector>
typedef unsigned long long ull;
using namespace std;
vector <ull> v;
int main() {
	// your code goes here
	int t;
	cin>>t;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	int i=2;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(i<n)
	        for(;i<n;i++)
	            v.push_back(v[i]+v[i-1]);
	   else
	   cout<<v[n]%99999<<endl;
	   cout<<v[i]%99999<<endl;
	}
	return 0;
}
