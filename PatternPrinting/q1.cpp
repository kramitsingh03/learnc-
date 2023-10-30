#include<iostream>
using namespace std;
int main(){
    int rows,column;
    cout<<"Enter Rows and Columns :"<<endl;
    cin>>rows>>column;
    for (int i = 0; i <rows; i++)
    {
       for (int j = i; j <column; j++)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    
    return 0;
}