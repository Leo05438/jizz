#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define NUM 5
int main(){
    int arr[NUM]; 
    int i,j;
    srand(time(NULL));
    for(i=0;i<NUM;i++){
    	arr[i]=rand()%101;
    	cout<<arr[i]<<" ";
	}
	cout<<"\n";
    cout<<"===================================================="<<endl;
	for(i=1;i<NUM;i++){
        j= arr[i];
        while(j < arr[i-1]){
            arr[i] = arr[i-1]; 
            i = i-1;   
        }
        arr[i] = j;                         
    } 
    for(i=0;i<NUM;i++)
        cout<<arr[i]<<" "; 
    return 0;       
}
