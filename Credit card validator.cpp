#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int totalsize(long long int y)
{
	string a=to_string(y);
	return a.length();
}

int getprefix(long long int X,int q)
{
	string a=to_string(X);
	return stoi(a.substr(0,q));
}

bool prefixmatch(long long int z,int p)
{
	bool a;
	a=getprefix(z,totalsize(p))==p;
	return a;
}

int digit(int r)
{
	if(r>9)
	return ((r/10)+(r%10));
	else
	return r;
}

int evenplace(long long int Y)
{
	int sum=0;
	string a=to_string(Y);
	for(int i=totalsize(Y)-2;i>=0;i-=2)
	{
		sum+=digit(int(a[i]-'0')*2);
	}
	return sum;
}

int oddplace(long long int Z)
{
	int sum=0;
	string a=to_string(Z);
	for(int i=totalsize(Z)-1;i>=0;i-=2)
	{
		sum+=a[i]-'0';
	}
	return sum;
}

bool checkvalid(long long int x)
{
	bool a,b,c;
	a=totalsize(x)>=13&&totalsize(x)<=16;
	if(a==0)
	return a;
	
	b=prefixmatch(x,4)||prefixmatch(x,5)||prefixmatch(x,37)||prefixmatch(x,6);
	if(b==0)
	return b;
	
	c=((evenplace(x)+oddplace(x))%10==0);
	return c;
}

int main()
{
	long long int cardnumber;
	cout<<"Enter your credit card number "<<endl;
	cin>>cardnumber;
	cout<<"Credit card number "<<cardnumber<<" is "<<(checkvalid(cardnumber)?"Valid":"Invalid");

}
