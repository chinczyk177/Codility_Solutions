#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> solution(vector<int> &A) {
    
    vector<int>::iterator It;
	It=max_element(A.begin(),A.end());
    int last=*It;

    last++;
    int N=A.size();

   vector<int>Y;
   vector<int>X;
   Y.assign(last,0);
   X.assign(last,0);
   
    for(int i=0;i<A.size();i++)
   {
	X[A[i]]++;
    Y[A[i]]=N;	
   }
         
     for(int i=0;i<X.size();i++)        
             if(X[i]!=0)
               for(int j=i;j<Y.size();j+=i)
                   if(Y[j]!=0)
			             Y[j]-=X[i];
     
vector<int>C;
	      for(int i=0;i<A.size();i++)
              {
			      C.push_back(Y[A[i]]);
              }      
                     
	return C;	
} 
