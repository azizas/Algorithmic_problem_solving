#include <string>
#include <iostream>
using namespace std  ; 
int main ()
{

	
	int N, Q ; 

	cin>>N ; 
	
	string *p = new string [N] ; 
	for (int i =0 ;i<N ; i++)
	{


cin>>p[i];

	}

cin>>Q;
string *p1 = new string[Q]; 
int num[Q] ;
for(int i = 0 ;i<Q; i++)
{
cin>>p1[i] ; 
num[i] = 0 ; 
}
for (int i = 0 ; i<Q ; i++)
{
for (int k = 0 ; k<N ; k++)
{

	if (p1[i]==p[k])
	{

		num[i]++; 
	}
	 
}
}
for (int i = 0 ; i<Q ; i++)
cout<<num[i]<<endl; 

}