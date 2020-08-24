/*
 *Repeated Substring Pattern
 */
bool repeatedSubstringPattern(char * s){
    char s_1[5001];
    char s_2[10001];
    memset(s_1,0,5001);
    memset(s_2,0,10001);
    int Len = strlen(s);
    int i=0,j=0;
    for( i = 1; i <= Len/2; i++){
        if(s[i] == s[0]){
            if(Len%(i) == 0){
                strncpy(s_1,s,i);
                for( j = 0; j < (Len/(i));j++){
                    strcat(s_2,s_1);
                }
                if(strcmp(s_2,s) == 0){
                    return true;
                }
                memset(s_2,0,10001);                
            }        
        }
    }
    return false;
}
