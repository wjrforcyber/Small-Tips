/*
 *Find pivot index 
 */

int pivotIndex(int* nums, int numsSize){
    int Sum = 0;
    int Left = 0;
    int i;
    if(numsSize == 0){
        return -1;
        }
    for(i = 0; i < numsSize; i++){
        Sum += nums[i];
    }
    
    if(Sum-nums[0] == 0){
        return 0;
        }
    for(i = 0;i < numsSize-1; i++){
        Left += nums[i];
        if(Left == (Sum - Left -nums[i+1])){
            return i+1;
        }
    }

    return -1;

}
