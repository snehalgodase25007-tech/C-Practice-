#include<iostream>
using namespace std;
#de¬ne MAX 5
class stack
{
private:
int a[MAX];
int top;
public:
stack()
{
top=-1;
}
int empty()
{
if(top==-1)
return(1);
else
return(0);
}
int full()
{
if (top==MAX1)
return(1);
else
return(0);
}
void push(int x)
{
top++;
a[top]=x;
}
int pop()
{
int x=a[top];
top--;
return(x);
}
int peek()
{
return(a[top]);
}
void display()
{
for(int i=top;i>=0;i--)
cout<<a[i]<<endl;
}
};
int main()
{
stack s;
if(!s.full())s.push(10); else cout<<"stack is full"<<endl;
cout<<"stack contents after push operation: "<<endl;
s.display();
if(!s.full())s.push(20); else cout<<"stack is full"<<endl;
cout<<"stack contents after push operation: "<<endl;
s.display();
if(!s.full())s.push(30); else cout<<"stack is full"<<endl;
cout<<"stack contents after push operation: "<<endl;
s.display();
if(!s.full())s.push(40); else cout<<"stack is full"<<endl;
cout<<"stack contents after push operation: "<<endl;
s.display();
if(!s.full())s.push(50); else cout<<"stack is full"<<endl;
cout<<"stack contents after push operation: "<<endl;
s.display();
if(!s.full())s.push(60); else cout<<"stack is full"<<endl;
cout<<"stack contents after push operation: "<<endl;
s.display();
if(s.empty())
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"poped out element is "<<s.pop()<<endl;
}
cout<<"stack contents after pop operation: "<<endl;
s.display();
if(s.empty())
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"poped out element is "<<s.pop()<<endl;
}
cout<<"stack contents after pop operation: "<<endl;
s.display();
if(s.empty())
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"poped out element is "<<s.pop()<<endl;
}
cout<<"stack contents after pop operation: "<<endl;
s.display();
if(s.empty())
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"poped out element is "<<s.pop()<<endl;
}
cout<<"stack contents after pop operation: "<<endl;
s.display();
if(s.empty())
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"poped out element is "<<s.pop()<<endl;
}
cout<<"stack contents after pop operation: "<<endl;
s.display();
if(s.empty())
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"poped out element is "<<s.pop()<<endl;
}
cout<<"stack contents after pop operation: "<<endl;
s.display();
return 0;
}
