#include<iostream.h>
#include<conio.h>
#include<process.h>
int main()
{
 clrscr();
 int AR[50],N,ins_item,index;
 int i,ch;
 char ctr='y';
 cout<<"\n HOW MANY ELEMENTS IN THE ARRAY ? ";
 cin>>N;
 cout<<"ENTER ARRAY ELEMENTS : \n";
 for(i=0;i<N;i++)
 {
  cin>>AR[i];
 }
 do
 {
  clrscr();
  cout<<"\n   ------------MENU OPTIONS------------";
  cout<<"\n 1. ARRAY TRAVERSAL \n 2. INSERT AN ELEMENT AT Kth POSITION";
  cout<<"\n 3. DELETE ELEMENT STORED AT Kth POSITION \n 4. EXIT ";
  cout<<"\n ENTER YOUR CHOICE : ";
  cin>>ch;
  switch(ch)
  {
   case 1: cout<<"\n ARRAY NOW IS AS SHOWN BELOW : \n";
	   for(i=0;i<N;i++)
	   { cout<<AR[i]<<"  "; }
	   break;

   case 2: cout<<"\n ENTER ELEMENT TO BE INSERTED : ";
	   cin>>ins_item;
	   if(N==50)
	   {
	    cout<<"\n OVERFLOW...!!!! TERMINATING!!!!!";
	    exit(1);
	   }
	   cout<<"\n ENTER DESIRED POSITION FOR NEW ELEMENT : ";
	   cin>>index;
	   for(i=N;i>index;i--)
	   {  AR[i]=AR[i-1];  }
	   AR[index]=ins_item;
	   N+=1;
	   cout<<"\n ARRAY NOW IS AS SHOWN BELOW : \n";
	   for(i=0;i<N;i++)
	   { cout<<AR[i]<<"  "; }
	   break;

   case 3: cout<<"\n ENTER DESIGNATED POSITION OF THE ELEMENT TO BE DELETED : ";
	   cin>>index;
	   if(N==0)
	   {
	    cout<<"\n UNDERFLOW...!!! TERMINATING!!!!";
	    exit(1);
	   }
	   for(i=index;i<N;i++)
	   {  AR[i]=AR[i+1]; }
	   N-=1;
	   cout<<"\n ARRAY NOW IS AS SHOWN BELOW : \n";
	   for(i=0;i<N;i++)
	   { cout<<AR[i]<<"  "; }
	   break;

   case 4: exit(0);

   default: cout<<"\n WRONG CHOICE ";
  }
 cout<<"\n WANT TO CONTINUE ? (Y/N) ";
 cin>>ctr;
 }while(ctr=='y'||ctr=='Y');
 getch();
 return 0;
}







