//		  min=minimalny element; 
	
//		  iteruje i sprawdzam ró¿nice A[i]-min
	
//		  porównuje uzyskan¹ ró¿nicê A[i]-min z maksymaln¹ dotychczas uzyskan¹ ró¿nic¹, je¿eli bêdzie wiêksza to j¹ zapamiêtuje ;
	
//		  jeœeli ró¿nica bêcie ujemna to zmieniam to zmieniam min na A[i],  jeœi A[i]-min<0 to min<A[i] czyli A[i] bêdzie minimalnym elementem. 	
		  
//	      zwracam najwiêksz¹ zapamiêtan¹ ró¿nicê. 	  

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solution(vector<int> &A) {
	if(!A.size()) return 0;

	int diference=0;
	int maxDiference=0;
	int min=A[0];    
		 for(int i=0;i<A.size();i++)
	      {  	         
		     diference=A[i]-min;
	      	   if(diference>=0)
	            maxDiference=max(diference,maxDiference);
		       else
		        min=A[i];		  	      
		  }
		  
return maxDiference;

}





















