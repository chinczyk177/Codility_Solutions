#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solution(int N, vector<int> &A) {

       vector<int>Count(N,0);
       int SizeA=A.size();
       int Max=0;
       for(int i=0;i<A.size();i++)
          {
          	 if(A[i]>N)
			       Count.assign(N,Max);          	        
			       else
					{
					Count[A[i]-1]++;	
		
			         Max=max(Max,Count[A[i]-1]);		  
	                }
		  }		     
 return Count;
}

int main(){
	
	vector<int>A={1,1,1,2,2,2,3,3,3,4,5,6};
    vector<int>V=solution(6,A);
    
    
        for(auto &i:V)
        cout<<i<<"  ";
    
    
    
    
    
    
	
	return 0; 
}
