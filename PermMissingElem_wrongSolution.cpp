#include<iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) { 
    if(A.size()==0) return  1;
    
     long long int real_sum=0;
   
       for(int i=0;i<A.size();i++)
       real_sum+=A[i];
 
    int Max_element=*max_element(A.begin(),A.end());
     
   long long int sum=Max_element*(Max_element+1)/2;
              
	  if(real_sum==sum)
       return Max_element+1;
       else
       return sum-real_sum;        
}

int main(){
	
   vector<int>A={};	
   cout<<solution(A);	
	          		
  return 0;
}
