/*
 * Determine whether an integer is a palindrome. 
 */

bool isPalindrome(int x){
    long y = 0;
    int temp = x;
    if(x < 0){
        return false;
    }
    else{
        while(x){
            y = y*10 + x%10;
            x = x/10;
        }
        if(temp == y){
            return true;
        }
        else{
            return false;
        }

    }
}
