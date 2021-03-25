#include<iostream.h>
#include<conio.h>
void Selsort(int[],int);
int main()
{
 clrscr();
 int AR[50],ITEM,N,index,i;
 cout<<"\n HOW MANY ELEMENTS IN THE ARRAY? ";
 cin>>N;
 cout<<"\n INITIALISING ARRAY . . . "<<endl;
 for(i=0;i<N;i++)
  cin>>AR[i];
 Selsort(AR,N);
 cout<<"\n\n THE SORTED ARRAY IS : "<<endl;
 for(i=0;i<N;i++)
  cout<<AR[i]<<"  ";
 getch();
 return 0;
}

void Selsort(int AR[], int size)
{
 int i,j,small,pos,temp;
 for(i=0;i<size-1;i++)
 {
  small=AR[i];
  pos=i;
  for(j=i+1;j<size;j++)
  {
   if(AR[j]<small)
   {
    small=AR[j];
    pos=j;
   }
  }
  temp=AR[i];
  AR[i]=AR[pos];
  AR[pos]=temp;
  cout<<"\n ARRAY AFTER PASS- "<<i+1<<" -:    ";
  for(j=0;j<size;j++)
   cout<<AR[j]<<"  ";
 }
}
