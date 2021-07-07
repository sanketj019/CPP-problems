
//function to return column with highest "0".

 int columnWithMaxZeros(vector<vector<int>>arr,int N){
       int count=0, max=0, column=-1;
        // Your code here
        for(int i=0; i<N; i++)
        {
            count = 0;
            for(int j=0; j<N; j++)
            {
                if(arr[j][i]==0)
                    {
                        count++;
                    }
            }
            if(count>max)
            {
                max = count;
                column = i;
            }
        }

        return column;
        }

