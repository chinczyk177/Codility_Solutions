#include<iostream>
int solution(int N) {
		 int i=1;
	     int x=1;
	     
	     while(i*i<=N)
	     {
	       if(N%i==0)x=i;	
	     	i++;
		 }
	return (N/x+x)*2; 
}
