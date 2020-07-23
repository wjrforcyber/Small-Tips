#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

//uint16_t to uint16_t,change the endian
#define Swap16(A)  ((((uint16_t)(A) & 0xff00) >> 8) | (((uint16_t)(A) & 0x00ff) << 8))

//uin16_t to unsigned char,use memcpy
unsigned char *ChangeFormat(uint16_t data_t){
	unsigned char *data;
	
    data = (unsigned char*)malloc(sizeof(char)*2);
    memset(data,0,sizeof(char)*2);
    memcpy(data,&data_t,2);
	 
    return data;
}

int main(){
    int i;
    uint16_t A = 0x2300;
    uint16_t B;
    
    printf("Original data:0x%04x",A);
      
    //The normal one
	B = Swap16(A);
    printf("\nSwap16:\n0x%04x",B);
    
    //memcpy 
    unsigned char *Test_1 = ChangeFormat(A);
    printf("\nSwap uint16 2 unsigned char arry:\n0x");
	for(i = 0; i < 2; i++){
    	printf("%02x",Test_1[i]);
	}
  
    return 0;
} 



