// 1
// 0 1
// 1 0 1             Rows = 1 to n
// 0 1 0 1           Columns 1 to Row No.
// 1 0 1 0 1         
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
            cout<<"1";
            cout<<" ";
            }
            else{
                cout<<"0"<<" ";
                
            }
            
        }cout<<endl;
    }

    return 0;
}