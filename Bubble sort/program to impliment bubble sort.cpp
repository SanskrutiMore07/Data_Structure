#include<iostream>
using namespace std;
class Bubblesort
{
public:
    int a[100],i,j,n,temp;
    void in();
    void out();
};
 void  Bubblesort::in()
 {
     cout<<"\n Enter How Many Elements Are In An Array:";
     cin>>n;
     cout<<"\n Enter array elements:\n";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
 }
 void Bubblesort::out()
 {

     for(i=0;i<n-1;i++)
     {
         for(j=0;j<(n-i-1);j++)

             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
     }


 int main()
 {
     Bubblesort BS;
     BS.in();
     BS.out();
     return 0;
 }
