#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
	
vector<int>C;
int A[N+1]={0};
int Count[N+1]={0};
     
	    int i=2;
		int k=0;
		     while(i*i<=N)                                                                   
             {           
   	             if(A[i]==0)                       
		           {
					 k=i*i;
					while(k<=N)                            
		              {	
						A[k]=i;			   	
					   	k+=i;		         
		              }
				   }
   	         i++;
             }                   
   
   
   int counter=0;
  
  for(int i=1;i<=N;i++)
  {	
  	if(A[i]!=0&&A[i/A[i]]==0)
  	counter++;	
  	Count[i]=counter;
  }
   
  for(int j=0;j<P.size();j++)
   {
  C.push_back(Count[Q[j]]-Count[P[j]-1]);				   	      
   }
   
return C;
}
