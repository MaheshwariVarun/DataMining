#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter Number of Data Items : ";
	cin>>n;
	vector<int> a(n);
	cout<<"\n Enter Data: \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int x;
	cout<<"Enter Number of Bins for Binning : ";
	cin >> x;
//Equi Frequency
	cout<<"By Equi-Frequency Method :\n";
	int binsize;
	binsize = n/x;
	if(n%x!=0)
	        binsize++;
	int j=0;
	int count1=binsize;	
	for(int i=0;i<n;i++)
	{
		if(count1 == binsize)
  		{	
			cout<<endl;
			cout<<"Bin "<< j+1 <<" Contains : ";
			count1=0;j++;
		}		
		cout<<a[i]<<" ";
		count1++;
	}	
cout<<"\n----------------------------------------------------\n";
//Equi-Width
	cout<<endl<<"By Equi-Width Method :\n";
	int size = (a[n-1] +a[0])/x+1;
	cout<<"Range is : "<<size<<endl;
	int count2=0,w=2;
	cout<<endl<<"Bin 1 Contains : ";
	for(int q=0;q<n;q++)
	{
		if(a[q] >=size && a[q]!=a[q-1] && q!=0)
		{
			cout<<endl<<"Bin "<<w <<" Contains : ";
			size+=size;		w++;
		}
		cout<<a[q] <<" ";
	}





}
