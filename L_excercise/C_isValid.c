/**
 *Valid Parentheses
 *
 */

bool isValid(char * s){
    
    char *stack = (char*)malloc(sizeof(char)*(strlen(s)+1));
    int t_s = 0;
    int i;
     
    if(s == NULL){
        return false;
    }

    while(s[i]!='\0'){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            t_s++;
            stack[t_s] = s[i];
            //++t_s;
        }
        else if(s[i]==')'&&stack[t_s] == '('||s[i]==']'&&stack[t_s]=='['||s[i]=='}'&&stack[t_s]=='{'){
            t_s--;
        }
        else{
            return false;
        }
        i++;
    }
    
    if(stack != NULL){
        free(stack);
        stack = NULL;
    }
    if(t_s == 0){
        return true;
    }
    return false;

}
