#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(int X,vector<int> &A) {

             const int N=A.size();         
			 
			 vector<int>V(X+1,0);	
			 V[0]=1;			 	   		   
			 vector<int>::iterator it=V.begin();			     
			   	
				   	      
        for(int i=0;i<N;i++)              
            {
                V[A[i]]++;   
		                  
				    it=find(V.begin(),V.end(),0); 		                   
						   if(it==V.end())
		              return i;      			       
            }
return -1;     
}
int main(){
	
	vector<int>A={1,2,3};
    cout<<solution(3,A);
	           	
	return 0; 
}
