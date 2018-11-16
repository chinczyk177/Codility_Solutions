#include<iostream>
#include<vector>
using namespace std;
int main(){	
	       
		    const int N=11;	      
		    int A[N]={0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0};
			         	               
				    vector<int>P; 	                
					for(int i=1;i<N-1;i++)
	                       if(A[i]>A[i-1]&&A[i]>A[i+1])
	                             P.push_back(i);
								          	           	           	           
	            int max=0; 	  
			   		 			     
	             for(int i=1;i<P.size();i++)
	                   if(P[i]-P[i-1]>max)
	                         max=P[i]-P[i-1];
	                        	  				  		           
	                 if(N%max==0)
	                    return N/max;
	                       else
	                           while(N%max!=0)   	                       
                                  max--;                                                                                             		                                             
					
					if(max==1) return 1; 
					
					return N/max;
					 							  						 						   
return 0; 
}
