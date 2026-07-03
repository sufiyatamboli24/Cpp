using namespace std;
#include<iostream>
class student
{
	public:
		int roll,s1,s2,s3,tot,a;
		string name;
	public:
		void get()
		{
			cout<<"\n\t Enter student Info (Roll,Name  and 3 Sub Marks) = ";	
			cin>>roll>>name>>s1>>s2>>s3;				
			tot=s1+s2+s3;
			a=tot/3;
		}
		void disp()
		{
			cout<<"\n\t"<<roll<<"\t"<<name<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<tot<<"\t"<<a;				
		}
};

int main()
{
	int i,n,j;
	
	cout<<"\n\t How many students? ";	
	cin>>n;
	
	student s[n];
	for(int i=0;i<n;i++)
	s[i].get();
  cout<<"\n\n\tRoll\tName\tS1\tS2\tS3\tTot\tAvg";				
	cout<<"\n\t------------------------------------------------------";				
	for(int i=0;i<n;i++)
		s[i].disp();
	cout<<"\n\t------------------------------------------------------";		
	student temp;
	for(i=0;i<n-1;i++)
{
  for(j=i+1;j<n;j++)
{
  if(s[i].name > s[j].name)
  {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
  }
} 
}
cout<<"\n\n\t*********SORTED BY NAME**********";
	cout<<"\n\n\tRoll\tName\tS1\tS2\tS3\tTot\tAvg";				
	cout<<"\n\t------------------------------------------------------";				
	for(int i=0;i<n;i++)
		s[i].disp();
	cout<<"\n\t------------------------------------------------------";		
    
    return 0;
}