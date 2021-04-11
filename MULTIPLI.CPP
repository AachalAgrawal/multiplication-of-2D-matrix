#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],b[2][2],c[2][2],sum,r1,r2,c1,c2,i,j,k;
cout<<"enter row and column for 1st matrix";
cin>>r1>>c1;
cout<<"enter row and column for 2nd matrix";
cin>>r2>>c2;
while(c1!=c2)
{
	cout<<"\ncolumn of first matrix not equal to row of second matrix";
	cout<<"enter row and column for first matrix";
	cin>>r1>>c1;
	cout<<"enter row and column of second matrix";
	cin>>r2>>c2;
}
cout<<"\nenter elements of 1st matrix";
for(i=0;i<r1;i++)
{
		for(j=0;j<c1;j++)
	{
			cout<<"enter elements a "<<i+1<<j+1;
			cin>>a[i][j];
	}
}
cout<<"enter  elements of 2nd matrix";
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		cout<<"enter elements b "<<i+1<<j+1;
		cin>>b[i][j];
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		c[i][j]=0;
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		for(k=0;k<c2;k++)
		{
			sum=sum+a[i][k]*b[k][j];
		}
	c[i][j]=sum;
	sum=0;
	}
}
cout<<"\nanswer:";
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		cout<<c[i][j]<<"\t";
	}
	cout<<endl;
}
getch();
}
