#include<iostream>
using namespace std;
class linearsearch
{
public:
    int a[100],i,item,n;
    void in();
    void out();
};
 void linearsearch::in()
 {
     cout<<"\n Enter How Many Elements Are In An Array:";
     cin>>n;
     cout<<"\n Enter array elements:\n";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
 }
 void linearsearch::out()
 {
     cout<<"\n Enter the element which want to search:";
     cin>>item;
     for(i=0;i<n;i++)
     {
         if(a[i]==item)
         {
             cout<<"Element found at position:"<<i<<endl;
             break;
         }
     }
     if(i==n)
     {
         cout<<"Element not found\n";
     }
 }
 int main()
 {
     linearsearch ls;
     ls.in();
     ls.out();
     return 0;
 }
