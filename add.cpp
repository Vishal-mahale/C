#include<iostream>
using namespace std;

class fraction
{
	private:
		int numer,denom;
	public:
		fraction();
		fraction(int numer,int denom);
		fraction(const fraction &r);
		int getNumer() const;
		int getDenom() const;
		fraction getFraction() const;
        void setNumer(int numer);
		void setDenom(int denom);
		void setFraction(int numer,int denom);
		int gcd(int n,int d);

		friend fraction operator +(const fraction& r1,const fraction& r2);
		friend fraction operator -(const fraction& r1,const fraction& r2);
		friend fraction operator *(const fraction& r1,const fraction& r2);
		friend fraction operator /(const fraction& r1,const fraction& r2);

			
};

fraction :: fraction()
{
	numer=0;
	denom=0;
}

fraction :: fraction(int numer,int denom)
{
	this->numer=numer;
	this->denom=denom;
}

fraction :: fraction(const fraction &r)
{
	numer=r.numer;
	denom=r.denom;
}

int fraction :: getNumer() const
{
	return this->numer;
}

int fraction :: getDenom() const
{
	return this->denom;
}

fraction  fraction :: getFraction() const
{
	return fraction(numer,denom);
}

void fraction :: setNumer(int numer)
{
	this->numer=numer;
}

void fraction :: setDenom(int denom)
{
	this->denom=denom;
}

void fraction :: setFraction(int numer,int denom)
{
	this->numer=numer;
	this->denom=denom;
}

int fraction :: gcd(int n,int d)
{
	if(d==0)
		return n;
	return gcd(d,n%d);
}

fraction fraction::operator+(const fraction &r1,const fraction &r2)
{
	fraction temp;
	temp.numer=r1.numer*r2.denom+r1.denom*r2.numer;	
	temp.denom=r1.denom*r2.denom;
	int ans=temp.gcd(temp.numer,temp.denom);
	temp.numer=temp.numer/ans;
	temp.denom=temp.denom/ans;
	return fraction(temp);
}

fraction fraction::operator -(const fraction &r1,const fraction &r2)
{
	fraction temp;
	temp.numer=r1.numer*r2.denom-r1.denom*r2.numer;	
	temp.denom=r1.denom*r2.denom;
	int ans=temp.gcd(temp.numer,temp.denom);
	temp.numer=temp.numer/ans;
	temp.denom=temp.denom/ans;
	return fraction(temp);
}

fraction fraction::operator*(const fraction &r1,const fraction &r2)
{
	fraction temp;
	temp.numer=r1.numer*r2.numer;	
	temp.denom=r1.denom*r2.denom;
	int ans=temp.gcd(temp.numer,temp.denom);
	temp.numer=temp.numer/ans;
	temp.denom=temp.denom/ans;
	return fraction(temp);
}

fraction fraction::operator/(const fraction &r1,const fraction &r2)
{
	fraction temp;
	temp.numer=r1.numer*r2.denom;	
	temp.denom=r1.denom*r2.numer;
	int ans=temp.gcd(temp.numer,temp.denom);
	temp.numer=temp.numer/ans;
	temp.denom=temp.denom/ans;
	return fraction(temp);
}

int main()
{
	int n,d;
	fraction r1,r2,r3,r4,r5,r6;
	cout<<"Enter 1st Fraction"<<endl;
	cin>>n>>d;
	r1.setFraction(n,d);
//	cout<<r1.getFraction();
	
	cout<<"Enter 2nd Fraction"<<endl;
	cin>>n>>d;
	r2.setFraction(n,d);

	r3=r1+r2;
	r4=r1-r2;
	r5=r1/r2;
	r6=r1*r2;

	cout<<"Addition  : "<<r3.getNumer()<<"/"<<r3.getDenom()<<endl;
	cout<<"Subtraction  : "<<r4.getNumer()<<"/"<<r4.getDenom()<<endl;
	cout<<"Multiplication  : "<<r5.getNumer()<<"/"<<r5.getDenom()<<endl;
	cout<<"Division  : "<<r6.getNumer()<<"/"<<r6.getDenom()<<endl;

	return 0;
}

