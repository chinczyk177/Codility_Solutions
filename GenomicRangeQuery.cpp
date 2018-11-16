#include<iostream>
#include<string>
using namespace std;
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
	vector<int>r;
	int n=S.length();
	int m=P.size();
    int tab[3][n+1];
    tab[0][0]=0;
    tab[1][0]=0;
    tab[2][0]=0;
	int a=0;
    int c=0;
    int g=0;
    	    for(unsigned j=0;j<S.length();j++)
             {
               if(S[j]=='A'){a++;}
			   if(S[j]=='C'){c++;}
			   if(S[j]=='G'){g++;}
			 	tab[0][j+1]=a;
             	tab[1][j+1]=c;
             	tab[2][j+1]=g;	
			}   			  
     for(int i=0;i<m;i++)
    	{
	     if(tab[0][Q[i]+1]!=tab[0][P[i]])       {r.push_back(1);continue;}
         if(tab[1][Q[i]+1]!=tab[1][P[i]])       {r.push_back(2);continue;}
         if(tab[2][Q[i]+1]!=tab[2][P[i]])       {r.push_back(3);continue;}
		 else     {r.push_back(4);}
		}					
return r;
}
