#include <algorithm>
#include<iostream>
#include<vector>
int solution(vector<int> &A) {
	       	        
            if(A.size()<3)return 0; 
            
	        sort(A.begin(),A.end());
	               
             for(int i=1;i<A.size()-1;i++)   
               {
                   if( (long int)A[i]+A[i+1]>A[i-1]&&
					   (long int)A[i]+A[i-1]>A[i+1]&&
	                   (long int)A[i+1]+A[i-1]>A[i]				     
				      ) 
					  return 1;     	
			   }
return 0 ;
}


     	


