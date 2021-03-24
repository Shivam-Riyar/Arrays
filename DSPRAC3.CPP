#include<iostream.h>
#include<conio.h>
#include<process.h>
int main()
{
 clrscr();
 int A[20][20],B[20][20],sum[20][20],diff[20][20],prod[50][50],transA[50][50],transB[50][50],r1,r2,c1,c2;
 int i,j,k,ch,tch;
 char ctr='y';
 cout<<"\n ENTER NO. OF ROWS AND COLUMNS RESPECTIVELY OF MATRIX A : \n";
 cin>>r1>>c1;
 cout<<"\n ENTER NO. OF ROWS AND COLUMNS RESPECTIVELY OF MATRIX B : \n";
 cin>>r2>>c2;
 cout<<"\n INPUT MATRIX A : ";
 for(i=0;i<r1;i++)
 { for(j=0;j<c1;j++)
   {
     cout<<"\n ENTER ELEMENT  "<<i<<" "<<j<<" :  ";
     cin>>A[i][j];
   }
  }
 cout<<"\n INPUT MATRIX B : ";
 for(i=0;i<r2;i++)
 { for(j=0;j<c2;j++)
   {
     cout<<"\n ENTER ELEMENT "<<i<<" "<<j<<" :  ";
     cin>>B[i][j];
   }
  }
 do
 {
   clrscr();
   cout<<"\n ------MAIN MENU------ ";
   cout<<"\n 1. ADDITION OF MATRIX \n 2. SUBTRACTION OF MATRIX ";
   cout<<"\n 3. MULTIPLICATION  \n 4. TRANSPOSE \n 5. EXIT ";
   cout<<"\n ENTER YOUR CHOICE : ";
   cin>>ch;
   switch(ch)
   {
    case 1: if(r1==r2&&c1==c2)
	    {
	     for(i=0;i<r1;i++)
	     { for(j=0;j<c1;j++)
	       { sum[i][j]=A[i][j]+B[i][j]; }
	     }
	     cout<<"\n THE SUM OF THE MATRICES IS : \n";
	     for(i=0;i<r1;i++)
	     { cout<<"\n";
	       for(j=0;j<c1;j++)
	       {  cout<<"    "<<sum[i][j];  }
	     }
	    }
	    else
	    cout<<"\ ADDITION NOT POSSIBLE  ";
	     break;

    case 2: if(r1==r2&&c1==c2)
	    {
	     for(i=0;i<r1;i++)
	     { for(j=0;j<c1;j++)
	       { diff[i][j]=A[i][j]-B[i][j]; }
	     }
	     cout<<"\n THE DIFFERENCE OF THE MATRICES IS : \n";
	     for(i=0;i<r1;i++)
	     { cout<<"\n";
	       for(j=0;j<c1;j++)
	       {  cout<<"    "<<diff[i][j];  }
	     }
	    }
	    else
	    cout<<"\n ADDITION NOT POSSIBLE ";
	     break;

    case 3: if(c1!=r2)
	    { cout<<"\n INCOMPATIBLE FOR MULTIPLICATION..... \n TERMINATING!!!!! ";
	      exit(1);
	    }
	    else
	    {
	     for(i=0;i<r1;i++)
	     { for(j=0;j<c2;j++)
	       {
		prod[i][j]=0;
		for(k=0;k<c1;k++)
		{ prod[i][j]+=(A[i][k]*B[k][j]); }
	       }
	     }cout<<"\n PRODUCT OF MATRICES ARE : ";
	     for(i=0;i<r1;i++)
	     {
	      cout<<"\n ";
	      for(j=0;j<c2;j++)
	      { cout<<prod[i][j]<<"  "; }
	     }
	    }
	    break;

    case 4: clrscr();
	    cout<<"\n WHICH MATRIX YOU WANT TO TRANSPOSE? : ";
	    cout<<"\n 1: MATRIX A \n 2. MATRIX B \n 3. BOTH ";
	    cout<<"\n ENTER YOUR CHOICE : ";
	    cin>>tch;
	    switch(tch)
	    {
	     case 1: cout<<"\n TRANSPOSE OF MATRIX A : ";
		     for(i=0;i<r1;i++)
		     {
		      cout<<"\n ";
		      for(j=0;j<c1;j++)
		      { transA[i][j]=A[j][i];
			cout<<transA[i][j]<<"   ";
		      }}
	     case 2: cout<<"\n TRANSPOSE OF MATRIX B : ";
		     for(i=0;i<r2;i++)
		     {
		      cout<<"\n ";
		      for(j=0;j<c2;j++)
		      { transB[i][j]=B[j][i];
			cout<<transB[i][j]<<"   ";
		      }}
	     case 3: cout<<"\n TRANSPOSE OF MATRIX A : ";
		     for(i=0;i<r1;i++)
		     {
		      cout<<"\n ";
		      for(j=0;j<c1;j++)
		      { transA[i][j]=A[j][i];
			cout<<transA[i][j]<<"   ";
		      }}
		     cout<<"\n TRANSPOSE OF MATRIX B : ";
		     for(i=0;i<r2;i++)
		     {
		      cout<<"\n ";
		      for(j=0;j<c2;j++)
		      { transB[i][j]=B[j][i];
			cout<<transB[i][j]<<"   ";
		      }}
	     default: cout<<"\n WRONG CHOICE";
	    }
	    break;

    case 5: exit(0);

    default: cout<<"\n WRONG CHOICE ";
   }
   cout<<"\n WANT TO CONTINUE? (Y/N)  : ";
   cin>>ctr;
 }while(ctr=='y'||ctr=='Y');
 getch();
 return 0;
}