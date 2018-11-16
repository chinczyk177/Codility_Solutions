#include <math.h>
#include<iostream>
int solution(int N) {

	int count=0; 
	int x=sqrt(N);
	
	     for(int i=1;i<=x;i++)
	      {
		  if(N%i==0)
		   count++;
	      }
	    	    
	count*=2;
	if(x*x==N)
	count--;		
 return count;
}
