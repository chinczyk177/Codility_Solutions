#include<iostream>
#include<vector> 
using namespace std;

vector<int>solution(vector<int> &A, int K) {
        
		     int N=A.size(); 
		     if(N==0)return A;
		     int i=0;
		     
		     vector<int>V;
		         if(K>=N)
		          i=K%N;
		         else
				  i=K;   
				  			  
				       
					   int iteratorFirst=N-i; 
				       
				       for(int i=iteratorFirst;i<N;i++)
				           V.push_back(A[i]);
				       for(int i=0;i<iteratorFirst;i++)
				            V.push_back(A[i]);			  				                                    		          	          
	  return V;	                 		     		 		  	             			   
}

int main(){
	       vector<int>A={1,2,3,4,5,6,7,8,9};     
		   vector<int>V=solution(A,9);
	      
	        for(int i=0;i<V.size();i++)
	          cout<<V[i]<<"  ";
	
	
return 0;
}	       

