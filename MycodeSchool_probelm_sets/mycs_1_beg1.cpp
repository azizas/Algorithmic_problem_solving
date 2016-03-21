#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
// Include headers as needed

using namespace std;

int main()
{
    vector <int> number ; 
int x ; 
do 
{
    cin>>x ; 
    number.push_back(x); 
}
while (x!=11); 
for (int i = 0 ; i<number.size()-1; i++)
cout<<number[i]<<endl; 
return 0;

    
}
