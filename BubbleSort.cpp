#include<iostream.h>
#include<conio.h>
void BubbleSort(int[],int);
int main()
{
 clrscr();
 int AR[50],ITEM,N,index,i;
 cout<<"\n HOW MANY ELEMENTS IN THE ARRAY ? ";
 cin>>N;
 cout<<"\n INITIALISING ARRAY : "<<endl;
 for(i=0;i<N;i++)
  cin>>AR[i];
 BubbleSort(AR,N);
 cout<<"\n\n THE SORTED ARRAY IS : "<<endl;
 for(i=0;i<N;i++)
  cout<<AR[i]<<"  ";
 getch();
 return 0;
}
void BubbleSort(int AR[],int size)
{
 int tmp,ctr=0,i,j,k;
 for(i=0;i<size;i++)
 { for(j=0;j<(size-1)-i;j++)
   {
    if(AR[j]>AR[j+1])
    {
     tmp=AR[j];
     AR[j]=AR[j+1];
     AR[j+1]=tmp;
    }
   }
   cout<<"\n ARRAY AFTER ITERATION - "<<++ctr<<" - : ";
   for(k=0;k<size;k++)
    cout<<AR[k]<<"  ";
   cout<<endl;
 }
}

