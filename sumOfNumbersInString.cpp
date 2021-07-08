
//sum of numbers included in string.


int findSum(string str)
    {

        int sum=0;
        int i=str.length()-1;int mul=1;
        while(i>=0){
        if(str[i]>='0' and str[i]<='9'){
        int temp=str[i]-'0';
        sum+=(temp*mul);
        mul*=10;
        }else{
        mul=1;
        }
        i--;
        }
        return sum;
        }
