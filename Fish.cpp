#include<iostream>
#include<stack>
#include<vector> 
int solution(vector<int> &A, vector<int> &B) {
    
	stack<int>s; 
	int count=0;        
		         
	for(int i=0;i<A.size();i++)
	{
		if(B[i]==0&&s.empty()!=1)
		      {
		           while(!s.empty())
				    {
				    	if(s.top()>A[i])  {count++;break;} 	
				    	else              {count++;s.pop();}										    	
					}
			  }		      
	    else if(B[i]==1)
		  s.push(A[i]);		
	}
return A.size()-count;
}
