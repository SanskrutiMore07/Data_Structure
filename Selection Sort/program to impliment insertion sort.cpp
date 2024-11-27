#include<iostream>
using namespace std;

class Insertion{

    int a[100],n,i,j,temp;
public:
    void in();
    void out();

};
void Insertion :: in()
{
    cout<<"\n Enter How Many Element You Wants: ";
    cin>>n;
    cout<<"\n Enter Element of array : \n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Insertion :: out()
{
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"\n After sorting Array Elements Are:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int main()
{
     Insertion IS;
     IS.in();
     IS.out();
     return 0;
}
