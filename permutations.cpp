#include<iostream>
using namespace std;
void swap(char*a, char*b )
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
void permutations(char string[], int i, int length)
{
	int n;
	if(i==length)
	{
		cout<<string<<endl;
	}
	else
	{
		for(n=i;n<=length;n++)
		{
			swap(string[i],string[n]);
			permutations( string , i + 1 , length);
			swap(string[i],string[n]);
		}
	}
}
int main()
{
	int num,i;
	cout<<" Enter the number of Characters:  ";
	cin>>num;
	cout<<endl;
	cout<<"The permutation w.r.t the given numbers of characters:=>  "<<endl;
	char string[num];
	for(i=0;i<num;i++)
	{
		string[i]=(i+97);
	}
	permutations(string, 0 ,num-1);
	cout<<endl;
	return 0;	
}
