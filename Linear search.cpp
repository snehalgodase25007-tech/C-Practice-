#include <iostream>
using namespace std;
int linearsearch (int a[],int n,int x)
{
    for(int i=0; i<n;i++)
    {
       if (a[i] ==x) return(i) 
    }
    return(-1)
}
int main()
{
    int a[10],x,n;
    cout<<"how many elements";
    cin>>n;
    cout<<"Enter"<<n<<"elements";
    for(int i=0;i<n;i++);
    {
        cin>>a[i]
    }
    cout<<"enter the element to be searched";
    cin>>x;
    int position=linear search(a,n,x);
    if(position==-1)cout<<"element not found";
    else cout<<"element found at position:"<<position;
    return(0);

    }
