#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &v,int n)
{
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void rotate(vector<int>& v,int n,int k){

    while(n<k)
    {
        swap(v[n],v[k]);
        n++;
        k--;

    }
}

void rotatearray(vector<int>& a,int n,int k)
{   
        //k=k%n;
        rotate(a,0,n-k-1);
        // cout<<"0 to n- k -1:-";
        // print(a,n-k-1);
        
        rotate(a,n-k,n-1);
        // cout<<"n-k  to n-1:-" ;
        // print(a,n-1);
       
       rotate(a,0,n-1);
        // cout<<"0 to n -1:-\n" ;
        // print(a,n-1);
}



int main(){

     vector<int> v={-1,-100,3,99};//3 99 -1 -100 k=2
    //vector<int> v={1,2,3,4,5,6,7,0};//5 6 7 1 2 3 4 k=3
    int n=v.size();
    cout<<"size of array:-"<<n<<endl;
    int k=2;//3 time rotate right side (right shift array)
    rotatearray(v, n, k);


    vector<int> v2(n);
     for(int i = 0; i < n; i++){
			v2[i] = v[(n   + i  ) % n]; // most imp formula
		}

    // for(int i = 0; i < arr.length; i++){
	// 		arr1[i] = arr[(arr.length - d + i + 1) % arr.length]; // most imp formula
	// 	}


    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
    cout<<"\nby rotation method:---  ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}