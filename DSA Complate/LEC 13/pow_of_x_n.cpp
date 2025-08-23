#include<iostream>
using namespace std;

double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x==1) return 1.0;
        if(x==0) return 0.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

        long BF = n; //BF : Binary Form
        double ans = 1;
        if(n < 0){
            x = 1/x;
            BF = -BF;
        }
        while(BF > 0){
            if(BF %2 == 1){
                ans = ans*x;
            }
            x = x*x;
            BF = BF/2;
        }
        return ans;
}

int main(){
    double x = 2.00000;
    int n = 10;
    double result = myPow(x,n); 
    cout<<"Pow of ("<<x<<","<<n<<") is : "<<result<<endl;
    return 0;
}