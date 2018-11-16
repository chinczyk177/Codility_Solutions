#include<string>
#include<iostream> 
#include<stack>
int solution(string &S) {
 
	stack<char>s;
		
     for(int i=0;i<S.size();i++)
	{
	 if(s.empty()) 
	   {
		 s.push(S[i]);
	   }
    
	 else
	   
	   {
		   if(s.top()==S[i]-2||s.top()==S[i]-1)    
     	   {
		     s.pop();			 	      
		   }	
		  else
	        s.push(S[i]);	
       }	 
	  }
  
 return s.empty();
  
}
