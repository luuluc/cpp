#include <bits/stdc++.h>
	using namespace std;
	
	int n ; 
    int a[100];

	int main(){
        int t;
        cin>> t;
        while(t--){
            cin>> n;
            		

            
            for( int i = 1 ;i <= n ;i++ ) cin>> a[i];
            cout<<"[";
            for( int i =1  ;i<n ;i++ ) cout<< a[i]<<" ";
            cout<<a[n];
            cout<< "]"<<endl;
                            int h = n;

            for(int i= n-1 ;i>0 ;i-- ){
                //int h = n;
                cout<< "[";
                for( int j = 1 ;j<=h-1 ;j++ ){
					a[j] = a[j] + a[j+1];
                }
                for( int j=1 ;j<=h-2;j++ ) 
                    cout<< a[j]<<" ";
                cout << a[h-1];
                    

                cout<< "]"<<endl;
                                                

                h--;
            }
            
        }
    }
