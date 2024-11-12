#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[6]={2,3,4,1,5,6};  
   
    for(int i =0;i<5;i++){//no of passes ke liye loop hai and passes=n-1 where n is no of elements 
        for(int j =0;j<5;j++){//yeh loop comparison ke liye hai jo first index se last second tak hota hai 
        //kyuki las wala apne app set ho jata hai so no need to count that one.
        if(arr[j]>arr[j+1]){
            swap(arr[i],arr[j+1]);
        }

        }
    }
    for(int i =0;i<6;i++){//for the printing of sorted array 
        cout<<arr[i];
    }
}//this is the way to sort the elements in dsa
//even you can change in j loop that n-1-i this is beacuse every time in every round or pass one less 
//step is required  for swap that is why you ca minus i
//so you can write for(int j =0;j<n-1-i;j++)