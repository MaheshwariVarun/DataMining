#include<bits/stdc++.h>
using namespace std;
int main()
{
	float Q1,Q2,Q3;
	float min,max;
	int q1,q2,q3,n;
	
	cout<<"Enter number of Data Items : ";
	cin>>n;
	vector<float> a(n);
	sort(a.begin(),a.end());
	cout<<"Enter Data Items : "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	q2=n/2;
	if(n%2 == 0)
		Q2 = (a[q2]+a[q2-1])/2; 
	else 
		Q2 = a[q2];
	
	min=a[0]; max=a[n-1];
	
	int count=0;
	for(int i=0;i<q2;i++)
		count++;
	
	if(count%2==0)
		Q1=(a[count/2]+a[count/2-1])/2;
	else
		Q1=a[count/2];
	
	vector<float> b(count);
	if(n%2!=0)
	{
		for(int i=0,j=q2+1; i<count ;i++,j++)
			b[i]=a[j];
	}
	else
	{
		for(int i=0,j=q2; i<count ;i++,j++)
			b[i]=a[j];
	}	
	
	if(count%2==0)
		Q3=(b[count/2]+b[count/2-1])/2;
	else
		Q3=b[count/2];
	
	cout<<"\nMinimum : "<<min<<endl<<"Q1 : "<<Q1<<endl<<"Q2 : "<<Q2<<endl<<"Q3 : "<<Q3<<endl<<"Maximum : "<<max<<endl;
	
	
	
}
