#include <algorithm>
#include<iostream>
#include<vector>
int solution(vector<int> &A) {

int N=A.size();    
sort(A.begin(),A.end());


if(A[0]*A[1]*A[N-1]>A[N-1]*A[N-2]*A[N-3])
     return A[0]*A[1]*A[N-1];
else
     return A[N-1]*A[N-2]*A[N-3] ;  
}
