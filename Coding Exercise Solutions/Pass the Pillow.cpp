class Solution {
public:
    int passThePillow(int n, int time) {

        int i=1;
        int y=0;

        int temp1=1;
        int temp2=0;

        while(y<time){

            if(temp1==1){

                i=i+1;

                if(i==n){
                    temp2=1;
                    temp1=0;
                
                }
            }

            else if(temp2==1){
                i=i-1;

                if(i==1){
                    temp1=1;
                    temp2=0;
                    
                }
            }
            y++;

        }

        return i;
    }
};
