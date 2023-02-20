// Print Numeric Hollow Inverted Half Pyramid 
  /* 
      1 2 3 4 5
      2     5
      3   5
      4 5
      5
  */
// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
  int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j==0 || i == 0 || j == n-i-1 ){
                cout<<i+j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
  }