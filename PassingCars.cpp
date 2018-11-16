#include<iostream>
#include<vector> 
using namespace std; 
int solution(vector<int> &A) {

	int countZero=0;
	int countPairs=0;
	for(auto &i:A)
 {	 
    if(i==0)countZero++;
	 else countPairs+=countZero;
    
    if(countPairs>1000000000)return -1;
  }
   
 return countPairs;
}


