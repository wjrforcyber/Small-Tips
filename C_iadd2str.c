#include <stdint.h>
#include<stdio.h>
#include<string.h>

char *iaddtostring(char *data,int a){
	char string[100];
	strcat(data,itoa(a,string,10));
	return data;	
}

int main(){  
    char *str[100];
    int Num;
    printf("String: ");
    gets(str);
    printf("Int Num: ");
    scanf("%d",&Num);
    
	printf("Original Str: %s",&str);
	
	printf("\nInt Added: %s",iaddtostring(str,Num));

	return 0;		
} 
