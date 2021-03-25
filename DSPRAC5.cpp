#include<iostream.h>
#include<conio.h>
int main()
{         
        clrscr();
	int AR[30],N,ITEM,i, first, last, middle;
	cout<<"\n HOW MANY ELEMENTS IN THE ARRAY ? "; 
        cin>>N;
 	cout<<"\n INITIALING ARRAY ... \n ENTER ELEMENTS IN ASCENDING ORDER : "; 
	for (i=0; i<N; i++)
	{ 
                cin>>AR[i];
	}
	cout<<"ENTER ELEMENT TO BE SEARCHED FOR : "; 
        cin>>ITEM;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(AR[middle] < ITEM)
	   {
		first = middle + 1;

	   }
	   else if(AR[middle] == ITEM)
	   {
		cout<<"\n ELEMENT FOUND AT POSITION : "<<middle+1<<" INDEX : "<<middle; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<" \n ELEMENT NOT FOUND IN THE ARRAY ";
	}
	getch();
	return 0;
}