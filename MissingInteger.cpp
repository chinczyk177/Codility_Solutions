#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &A) {
 
     int N=1000000;
     vector<int>Count(N,0);
     
	  for(auto &i:A)
       {
	       if(i>0)
        Count[i]++;
       }
	  	  
	  	  
	  for(int i=1;i<N;i++)
	    if(Count[i]==0)
	         return i;
 
}

int main(){
	
      vector<int>A={-100000,-7,1,2,3,4,5,5};
      int N=100000;
      cout<< solution(A);
  
}
