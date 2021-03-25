#include<iostream.h>
#include<conio.h>
 
int main()
{       
        clrscr();
	int AR[20],N,ITEM,i,flag=0;
	cout<<"\n HOW MANY ELEMENTS IN THE ARRAY? ";
	cin>>N;
	cout<<"\n INITIALISING ARRAY . . .\n";
	
	for(i=0;i<N;++i)
		cin>>AR[i];
	
	cout<<"\n ENTER ELEMENTS TO BE SEARCHED FOR : ";
	cin>>ITEM;

	for(i=0;i<N;++i)
	{
		if(AR[i]==ITEM)
		{
			flag=1;

		}

	if(flag)
	      {
		cout<<"\n ELEMENT FOUND AT POSITION : "<<i+1<<" AND INDEX : "<<i;
		flag=0;
	      }
	}
	getch();
	return 0;
}
