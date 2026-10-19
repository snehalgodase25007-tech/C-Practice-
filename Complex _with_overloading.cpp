# include<iostream>
using namespace std;
class complex
{
private:
¯oat real;
¯oat imag;
public :
complex(){
real=0;
imag=0;
}
complex(¯oat r,¯oat i)
{
real=r;
imag=i;
}
~complex()
{}
void display()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}
complex operator+(complex c)
{
return complex(real+c.real,imag+c.imag);
}
complex operator-(complex c)
{
return complex(real-c.real,imag-c.imag);
}
complex operator*(complex c)
{
¯oat r=real*c.real-imag*c.imag;
¯oat i=real*c.real+imag*c.imag;
return complex(r,i);
}
};
int main()
{
complex c1(4,5),c2(2,3);
cout<<"\n ¬rst complex number=";
c1.display();
cout<<"\n second complex number=";
c2.display();
complex sum=c1+c2;
cout<<"\n sum =";
sum.display();
complex di£=c1-c2;
cout<<"\n di£erence =";
di£.display();
complex prod=c1*c2;
cout<<"\n product =";
prod.display();
return 0;
}
