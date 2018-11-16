#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool check(int s,vector<int>&P)
{
    int counter=1;
    int j=0;

           counter=1;
           j=0;
                    
                    for(int i=1;i<P.size();i++)   
                       
                       	if(P[i]-P[j]>=s)
                       	{counter++,j=i;	}                						   
					   
					  
					   
       if(counter>=s)
	   return true;  
	   else
	   return false;
}

int solution(vector<int>&A) {
	vector<int>P;
	const int n=A.size();
	for(int i=1;i<n-1;i++)
    {
	          if(A[i-1]<A[i]&&A[i]>A[i+1])
	          P.push_back(i);	
	}
	
	if(P.size()==0)return 0;
	
      int s=sqrt(n)+1;
      
      while(s>0)
 {
    if(check(s,P)==true)return s;
 	s--;
 }	 	
}
