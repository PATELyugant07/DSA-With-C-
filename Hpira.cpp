#include<iostream>
using namespace std; 
int main(){
    int num; 
    cout << "enter any number: ";
    cin >> num;
    int n=num/2;

    for (int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col=col+1){
            cout << " ";
        }
        //star
        for(int col=0;col<row+1; col=col+1){

            if(col == 0 || col == row+1-1){
                cout << "* ";
            } 
            else {
                cout << "  ";
            }
        }
        
        cout << endl;
    }

} 

