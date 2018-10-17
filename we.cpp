#include<iostream.h>  
int main()  
{   
	int n;   
	cout<<"请输入该班人数(n<=30):";   
	cin>>n;    
	double *a=new double [n];   
	char *b=new char [n];      
	cout<<"请输入学生姓名："<<endl;  
	for(int i=0;i<n;i++)   
	cin>>b[i];      
	cout<<endl<<"请输入分数："<<endl;     
	for(int j=0;j<n;j++)   
	cin>>a[j];  
	double ave=0;     
	double sum=0;   
	for(int k=0;k<n;k++)  
	{	   
		sum+=a[k]; 
	}   
	ave=sum/n;   
	cout<<"班级平均分为"<<ave<<endl;   
	cout<<"考试分数低于班级平均分的考生为：";  
	for(int g=0;g<n;g++) 
	{    
		int m=0;   
		if(a[g]<ave)   
		{    
			m=g;    
			cout<<b[m]<<'\0';   
		}  
	}      
	cout<<endl<<"最高分以及最高分的学生姓名:";  
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