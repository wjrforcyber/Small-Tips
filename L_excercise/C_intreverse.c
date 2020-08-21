/*
 *Given a 32-bit signed integer, reverse digits of an integer.
*/

int reverse(int x){
    long z = 0;
    while(x){       
        z = z*10+x%10;
        x = x/10;
    }
    if(INT_MAX<z || INT_MIN>z){
            return 0;
        }
return z;
} 
