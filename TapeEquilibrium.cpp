#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solution(vector<int>&A) {

    const int N=A.size();
	
	vector<int>sum;
	sum.push_back(A[0]);
	
               for(int i=1;i<N;i++)
               sum.push_back(sum[i-1]+A[i]);               ////////// calculate the array of  prefix sum     
     
	 int result=1000000000; 
     
     for(int P=1;P<N;P++)                                 //////////  find the smalest absolute value of remainder betweeen to ranges  ( A[0]....A[P-1] and A[P].....A[N-1]) 
	     if(result>abs(sum[P-1]-(sum[N-1]-sum[P-1])))
	           result=abs(sum[P-1]-(sum[N-1]-sum[P-1]));

return result; 		     
}

