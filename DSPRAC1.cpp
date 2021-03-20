#include <iostream>
using namespace std;

int main() 
{
    int n,AR[100],max,min,i;
    cout<<"\n HOW MANY ELEMENTS IN THE ARRAY?";
    cin>>n;
    for(i=0;i<n;i++)
    {   
        cout<"\n ENTER ELEMENT "<<i+1;
        cin>>AR[i];
    }
    min=max=AR[0];
    for(i=1; i<n; i++)
    {
         if(min>AR[i])
		  min=AR[i];   
		 if(max<AR[i])
		  max=AR[i];       
    }
    cout<<"MAXIMUM VALUE ELEMENT OF THE ARRAY IS: "<<max;
    cout<<"MINIMUM VALUE ELEMENT OF THE ARRAY IS: "<<min;
	return 0;
}