//     1
//    212
//   32123   n=5
//  4321234
// 543212345
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j = 1;j<=i+k;j++){
            cout<<j;
           
        }
         k++;
         cout<<endl;
    }

    return 0;
}