
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>


using namespace std;


int findMax(vector<vector<int> > vect, int i, int j, int iter1, int iter2) 
{ 
  
    
    int maxElement = vect[i][j]; 
  
    for (int l = i; l <= iter1; l++) { 
        for (int m = j; m <=iter2; m++) { 
            if (vect[l][m] > maxElement) { 
                maxElement = vect[l][m]; 
            } 
        } 
    } 
  
    return maxElement; 
} 

vector<int> solve(vector<vector<int> > vect, int n, int k, int m){
    
    int iter = n-k+1;
    
    vector <int> res;
    vector <int> result(3,0);
    // vector <int> temp;
    
    for (int i=0; i<iter; i++)
        for (int j=0; j<iter;j++)
            
            res.push_back(findMax(vect, i, j, i+iter, j+iter));
    
    
    
    sort(res.begin(), res.end());
    
    int index =0;
    
    for (int i=0; i<res.size(); i++)
        {
            if (res[i]>=m){
                
            result[0]++;
            if (!index) { index= 1; result[1]=res[i];   }
            
            }
        }
    
    result[2]=res[res.size()-1];
    
    return result;
}



int main()
{

    int t=0;
    
    cin>>t;
    
    
    while(t--){
    
    int n,k,m;
    
    n=k=m=0;
    
    cin>>n>>k>>m;
    
    vector<vector<int> > arr(n);
    
    for (int i=0;i<n;i++){
        arr[i].resize(n); 
    
        for(int j=0; j<n; j++)
    {
        cin>>arr[i][j];
                
    }
        
    }

    vector<int> res = solve(arr, n,k,m);
    
    
    for (auto i: res)
        cout<<i<<" ";
}

}



/* input

1
6 4 5
4 6 7 3 10 2
3 8 1 2 4 7
1 7 3 7 2 9
8 9 3 1 3 4
8 6 5 3 4 9
10 8 4 7 2 3



*/
maxpooling.cpp
Displaying maxpooling.cpp.