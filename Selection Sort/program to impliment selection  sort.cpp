#include<iostream>
using namespace std;

class Selectionsort
{
public:
    int n,i,j,loc,temp,min,a[100];
    void in();
    void out();

};
 void Selectionsort::in()
 {
     cout<<"\n Enter how many elements you want:";
     cin>>n;
     cout<<"Enter array elements:";
     for(i=0;i<n;i++)
     {
         cout<<a[i];
     }
 }
 void Selectionsort::out()
 {
     for(i=0;i<(n-1);i++)
     {
         min=a[i];
         loc=i;
         for(j=i+1;j<n;j++)
         {
             if(min>a[j])
             {
                 min=a[j];
                 loc=j;
             }
         }
         temp=a[i];
         a[i]=a[loc];
         a[loc]=temp;
     }
     cout<<"\n After Sorting Array Elements Are :";
     for(i=0;i<n;i++)
     {
         cout<<" "<<a[i];
     }
 }
 int main()
 {
     Selectionsort sc;
     sc.in();
     sc.out();
     return 0;
 }
