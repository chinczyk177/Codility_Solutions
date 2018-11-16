//		  min=minimalny element; 
	
//		  iteruje i sprawdzam r�nice A[i]-min
	
//		  por�wnuje uzyskan� r�nic� A[i]-min z maksymaln� dotychczas uzyskan� r�nic�, je�eli b�dzie wi�ksza to j� zapami�tuje ;
	
//		  je�eli r�nica b�cie ujemna to zmieniam to zmieniam min na A[i],  je�i A[i]-min<0 to min<A[i] czyli A[i] b�dzie minimalnym elementem. 	
		  
//	      zwracam najwi�ksz� zapami�tan� r�nic�. 	  

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





















