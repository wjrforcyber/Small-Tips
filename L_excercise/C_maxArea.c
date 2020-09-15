/**
 * Note: Container With Most Water
 */
int maxArea(int* height, int heightSize){
    int i,j;
    int Temp;
    int Temp_t = 0;
    for(i = 0; i < heightSize; i++){
        for(j = i+1; j < heightSize;j++){
            Temp = (j-i)*((height[i]>height[j])?height[j]:height[i]);
            if(Temp > Temp_t){
                Temp_t = Temp;
            }
            
        }
       
    }
    return Temp_t;

}
