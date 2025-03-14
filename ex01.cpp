#include <iostream>
using namespace std;
int main()
{
     
    int x,y;
    cin>>x>>y;
    int arr[y];
    for(int i=0;i<y;i++){
        cin>>arr[i];
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
1.
#include <iostream>
using namespace std;
int main()
{
     
    int m=5,n=6,c=0;
    
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           i=(i+1)*10;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
