#include<iostream>
using namespace std;
int main()
{
    int i,j;
 for(i=4;i>=0;i--){
   for(j=0;j<5;j++)
    {  if(j>=4-i){
    	cout<<"*";
    }
    else
    {
    	cout<<" ";
	}
	} cout<<"\n";
}
	return 0;
}
