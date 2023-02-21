// Print hollow full pyramid pattern.
/*
                    *
                  *   *
                *       *
              *           *
            * * * * * * * * *  
*/
// void main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n*2-1; ++j) {
// 		        int k=0;
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i - 1 || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             } k++;
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
  
  int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n-i-1; ++j) {  // space
          cout<<"  ";		        
        }
        for(int j=0;j<2*i-1;j++) {
          if(j==0 || j==2*i-2 || i==n-1){
            cout<<"* ";
          }
          else {
            cout<<"  ";
          }
        }
        cout<<endl;
    }
    return 0;
  }