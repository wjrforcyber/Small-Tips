/*
 *
 *Implement an algorithm to determine if a string has all unique characters. 
 *What if you cannot use additional data structures? 
 */ 
bool isUnique(char* astr){
    int *stack = (int *)calloc(100,sizeof(int));
    int i;
    for(i = 0;i < strlen(astr);i++){
        if(stack[astr[i]-'0'] == 1){
            return false;
        }
        stack[astr[i]-'0'] = 1;
    }
    return true;

}
