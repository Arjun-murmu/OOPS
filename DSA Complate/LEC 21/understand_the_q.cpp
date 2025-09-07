#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Function to check if a given maximum number of pages (maxAllowedPages) 
// can be allocated among 'm' students without violating the condition.
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){  // maxAllowedPages = mid
    int student = 1, pages = 0; // start with 1 student and 0 pages allocated

    for(int i = 0; i<n; i++){
        // If any single book has more pages than maxAllowedPages, 
        // then allocation is not possible.
        if(arr[i] > maxAllowedPages){
            return false;
        }

        // If current student can take this book without exceeding the limit
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];  // allocate book to current student
        }
        else{
            // Otherwise, allocate this book to the next student
            student++;
            pages = arr[i];   // reset pages for new student
        }
    }

    // If the number of students used is more than allowed 'm', return false
    return student > m ? false : true;
}

// Function to find the minimum possible value of the maximum pages allocated 
// to any student (Binary Search approach).
int allocationBooks(vector<int> &arr, int n, int m){ //O(n log(sum))
    if(m > n){ 
        // More students than books: not possible to allocate (each student must get at least one book)
        return -1;
    }

    // Calculate total sum of pages -> this is the upper bound of search space
    int sum = 0;
    for(int i = 0; i< n ; i++){  //O(n)
        sum += arr[i];
    }

    int answer = -1;
    int start = 0, end = sum;  // Search space: from 0 to total pages

    // Binary search to minimize the maximum pages
    while(start <= end){ 
        int mid = start + (end - start) / 2;  // mid = potential answer

        // Check if allocation is possible with 'mid' as max allowed pages
        if(isValid(arr, n , m, mid)){ 
            // If valid, try to minimize further -> go left
            answer = mid;
            end = mid -1;
        }
        else{  
            // If not valid, increase the allowed pages -> go right
            start = mid + 1;
        }
    }
    return answer; // Final minimized maximum pages
}

int main(){
    vector<int> arr = {2 ,1, 3, 4}; // pages in each book
    int n = 4,  m = 3;              // n = number of books, m = number of students

    // Call function and print result
    cout << allocationBooks(arr, n , m) << endl;
    return 0;
}
