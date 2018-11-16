#include <algorithm>
#include<iostream>
#include<vector>
int solution(vector<int> &A) {
  	
	 bool x=0;
	 for(auto &i:A)
	 if (i>=0)x=1;
	  
	  if(!x)return *max_element(A.begin(),A.end());
	
	 int sum=0; 
	 int Maxsum=A[0];     	      
		  
		  for(int i=0;i<A.size();i++)
	      {
			    sum+=A[i];			    
	            sum=max(0,sum);
	            
	            Maxsum=max(Maxsum,sum);
	      } 
 return Maxsum; 
}
