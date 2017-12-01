#include<bits/stdc++.h>
using namespace std;

int main()
{
	int p,r;
	
	cout<<"Enter Number of Products : ";
	cin>>p;
	cout<<"Enter Number of  Regions : ";
	cin>>r;
	float ttotalcount[p];
	float dtotalcount[r];
	int a[p][r];
	for(int i=0;i<p;i++)
	{
		cout<< "Enter " << r<<" Values of Region on Product "<<i+1<<": ";
		for(int j=0;j<r;j++)
		{
			cin>>a[i][j];
		}
	}
	
	
	for(int i=0;i<p;i++)
	{
	ttotalcount[i] =0;
		for(int j=0;j<r;j++)
		{
			ttotalcount[i]+=a[i][j];
			
		}
	}
	
	for(int i=0;i<r;i++)
	{
		dtotalcount[i]=0;
		for(int j=0;j<p;j++)
		{
			dtotalcount[i]+=a[j][i];
			
		}
	}
	for(int i=0;i<p;i++)
	{
		cout<<" T-Weigh Total = " << ttotalcount[i]<<"      ";
	}
	cout<<endl;
		for(int i=0;i<p;i++)
	{
		cout<<" D-Weigh Total = " << dtotalcount[i]<<endl;
	} 
	
	cout<<endl<<"Calculating T-weights... "<<endl;
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<"  T-Weight for Product "<<i<<" In Region "<<j+1<<":"<<a[i][j]/ttotalcount[i]*100<<"% " <<endl;
		}
	//	cout<<endl;
	}
	
	
	cout<<endl<<"Calculating D-weights.. "<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<p;j++)
		{
			cout<<"	 D-Weight of Product "<<j <<" In Region "<<i+1<<":"<<a[j][i]/dtotalcount[i]*100<<"% "<<endl ;
		}
		//cout<<endl;
	}
	
	
	return 0;
}
