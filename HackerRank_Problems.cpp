#STACKS - EQUAL STACKS
//(error in code)
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    /*
     * Write your code here.
     */
     stack<int> s1;
     stack<int> s2;
     stack<int> s3;
     int total1 =0, total2=0 ,total3=0;
     for(int i=h1.size()-1; i>0; i--){
         total1+=h1[i];
         s1.push(total1);
     }
     for(int i=h2.size()-1; i>0; i--){
         total2+=h2[i];
         s2.push(total2);
     }
     for(int i=h3.size()-1; i>0;i--){
         total3+=h3[i];
         s3.push(total3);
     }
     while(true){
         if(s1.empty() || s2.empty() || s3.empty()){
             return 0;
         }

         total1 = s1.top();
         total2 = s2.top();
         total3 = s3.top();

         if(total1==total2 && total2==total3){
             return total1;
         }
         if(total1>total2 && total1>total3){
             s1.pop();
         }
         else if(total2>total1 && total2>total3){
             s2.pop();
         }
         else if(total3>total1 && total3>total2){
             s3.pop();
         }

     }

}


/*
PROBLEM 2 - GAME OF 2 STACKS
8/14 TEST CASES PASSED
6/14 TEST CASES FAILED
*/
int twoStacks(int x, vector<int> a, vector<int> b) {
    /*
     * Write your code here.
     */
    int count=0, i=0, j=0, sum=0;
    while(i<a.size() && sum+a[i]<=x){
        sum+=a[i];
        i++;
    } 
    count++;

    while(j<b.size() && i>0){
        sum+=b[j];
        j++;

        while(sum>x && i>0){
            i--;
            sum-=a[i];
            
        }
        if(sum <=x && i+j>count){
            count = i+j;
        }
    }
    return count;
     

}
