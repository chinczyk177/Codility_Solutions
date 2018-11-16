#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

	    vector<int>A;
	  
	    if(A.size()==0)
	    sort(A.begin(),A.end());

	     int count=1;
	  
	    for(int i=0;i<A.size()-1;i++)
	        if(A[i+1]!=A[i])
	          count++;
	      
	cout<<count<<endl;
	
	return 0; 
}
