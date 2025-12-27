#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t > 0){
	    int n;
    	cin>>n;
    	int arr[n];
    	int largest = 0;
    	for(int i = 0; i < n; i++){
    	    cin>>arr[i];
    	    if(arr[i] > largest){
    	        largest = arr[i];
    	    }
    	}
    	cout<<largest<<endl;
    	t--;
	}
	return 0;
}

/*
Given a list of 
N
N integers, representing height of mountains. Find the height of the tallest mountain.

Input:
First line will contain 
T
T, number of testcases. Then the testcases follow.
The first line in each testcase contains one integer, 
N
N.
The following line contains 
N
N space separated integers: the height of each mountains.
Output:
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.
Input :
1 
5
4 7 6 3 1

ouput : 7

i understand the algorithm how i solve but i don't understand what is the meaing of first input 1, 
*/