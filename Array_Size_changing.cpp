

#include<iostream>

using namespace std;

int main(){
	
	int size,c;
	cout<<"Enter the size of the array : ";
	cin>>size;
	
	int arr[size];
	
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" number : ";
			cin>>arr[i];
		}
		
	cout<<"Enter the index of variable in your defined array which you want to change : ";
	cin>>c;
	
	arr[++size];
	
		for(int i=size;i<=c;i--){
			
			arr[i]==arr[i+1];
		}
		
	cout<<"Enter the new variable : ";
	cin>>arr[c];
	
	for(int i=0;i<(size+1);i++){
		
		cout<<arr[i]<<endl;
	}


return 0;
}
