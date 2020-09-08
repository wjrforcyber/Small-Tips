/**
 * Note: Number of Steps to Reduce a Number to Zero
 */
int numberOfSteps (int num){
    int temp = 0;
    while(num !=  0){
        if(num%2 == 0){
            num = num/2;
        }
        else if(num%2 != 0){
            num = num - 1;
        }
        temp++;     
    }
  
    return temp;   

}
