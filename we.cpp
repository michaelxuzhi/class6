#include<iostream.h>  
int main()  
{   
	int n;   
	cout<<"������ð�����(n<=30):";   
	cin>>n;    
	double *a=new double [n];   
	char *b=new char [n];      
	cout<<"������ѧ��������"<<endl;  
	for(int i=0;i<n;i++)   
	cin>>b[i];      
	cout<<endl<<"�����������"<<endl;     
	for(int j=0;j<n;j++)   
	cin>>a[j];  
	double ave=0;     
	double sum=0;   
	for(int k=0;k<n;k++)  
	{	   
		sum+=a[k]; 
	}   
	ave=sum/n;   
	cout<<"�༶ƽ����Ϊ"<<ave<<endl;   
	cout<<"���Է������ڰ༶ƽ���ֵĿ���Ϊ��";  
	for(int g=0;g<n;g++) 
	{    
		int m=0;   
		if(a[g]<ave)   
		{    
			m=g;    
			cout<<b[m]<<'\0';   
		}  
	}      
	cout<<endl<<"��߷��Լ���߷ֵ�ѧ������:";  
	int r=0;   
	double max=0;      
	for(int f=0;f<n;f++)  
	{    
		if(a[f]>r)   
		{     
			max=a[f];    
			r=f;   
		}  
	}    
	cout<<a[r]<<'\0'<<b[r]<<endl; 
} 