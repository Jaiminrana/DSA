#include<bits/stdc++.h>
using namespace std;

void alt_tab_window(int a[],int n,int k)
{
    int index=(k%n)-1;//these will return the index of that element which is to be put on 1st position in array as after pressing al+tab these window will return

    int x=a[index];//contain value of that alt+tab that has to place at 1st 

    while(index>0)//how many time we need to right shift element
    {
        int p=index;
        index--;
        a[p]=a[index];
    }
    a[0]=x;
    cout<<"After ALT+TAB array will be as follows:-\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
}
int main(){


    int n,k;//4 3 
    cout<<"Enter size and k'tab size :-";
    cin>>n>>k;

    int a[n];// 1 2 3 4 output:- 3 1 2 4
    cout<<"enter array elements:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    alt_tab_window(a,n,k);
    return 0;
}
