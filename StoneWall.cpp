#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int solution(vector<int> &H) {
              stack<int>s;
              s.push(H[0]);
     
             int n=1; 
	        for(int i=1;i<H.size();i++)
	       {
	             if(H[i]>s.top())		
				  {s.push(H[i]);
				  n++;
				  }  
				     
				 else if(H[i]==s.top())	 
				  continue; 	 					   		       	    
	       	     else 
	       	      {
	       	      	s.pop();
	       	      	       
	       	      	       while(s.empty()!=1&&H[i]<s.top())
					         s.pop();
					         
					        n++;
					        
					        if(s.empty()!=1&&s.top()==H[i])   
					         {n--; }
					s.push(H[i]);				       	   
	       	       }       	
		   }	
return n; 
}
