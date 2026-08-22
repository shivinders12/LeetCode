class Solution {
public:
    bool checkDivisibility(int n) {
        
        int product=1;
        int sum=0;

        while(n!=0)
        {
            int x= n%10;
        }
    }
            product=product*x;
            sum=sum+x;
            n=(n-x)/10;

        int divi=product+sum;
        if(n1%divi==0) return true;
        else return false;
        int n1=n;
};
