/*
 * Roman to Integer
 */
 
int romanToInt(char * s){
    int Len;
    int i;
    int sum = 0;
    Len = strlen(s);
    for(i = 0; i < Len ; i++){
        if(s[i] == 'I'){
            sum += 1;
        }
        if(s[i] == 'V'){
            sum +=5;
        }
        if(s[i] == 'X'){
            sum +=10;
        }
        if(s[i] == 'L'){
            sum +=50;
        }
        if(s[i] == 'C'){
            sum +=100;
        }
        if(s[i] == 'D'){
            sum +=500;
        }
        if(s[i] == 'M'){
            sum +=1000;
        }
        
    }
        if(strstr(s,"IV") != NULL){
            sum -= 2;
        }
        if(strstr(s,"IX") != NULL){
            sum -= 2;
        }
        if(strstr(s,"XL") != NULL){
            sum -= 20;
        }
        if(strstr(s,"XC") != NULL){
            sum -= 20;
        }
        if(strstr(s,"CD") != NULL){
            sum -= 200;
        }
        if(strstr(s,"CM") != 0){
            sum -= 200;
        }
    
return sum;
}
