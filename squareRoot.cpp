class Solution {
public:
    int solve(long low,long high,int x){
        if (low>high) return high;
        long mid=low+(high-low)/2;
        long sq=mid*mid;
        if(sq==x) return mid;
        if(sq<x){
           return  solve(mid+1,high,x);
        }
        else{
           return solve(low,mid-1,x);
        }
    }
    int mySqrt(int x) {
        if(x==0||x==1) return x;
    return solve(1,x,x);
    }
};
