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

bool checkvalid(long long int x)
{
	bool a,b,c;
	a=totalsize(x)>=13&&totalsize(x)<=16;
	if(a==0)
	return a;
	
	b=prefixmatch(x,4)||prefixmatch(x,5)||prefixmatch(x,37)||prefixmatch(x,6);
	if(b==0)
	return b;
	
	c=
}

int main()
{
	long long int cardnumber;
	cout<<"Enter your credit card number "<<endl;
	cin>>cardnumber;
	cout<<"Credit card number is "<<(checkvalid(cardnumber)?"Valid":"Invalid");

}
