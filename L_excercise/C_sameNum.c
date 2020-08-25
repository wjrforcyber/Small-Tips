/**
 *Find the same nunmber
 * };
 */


int findRepeatNumber(int* nums, int numsSize){
    
    int* hash_set = (int*)calloc(numsSize,sizeof(int));
    int i;
    for(i = 0 ; i < numsSize; i++){
        if(hash_set[nums[i]] == 1){
            return nums[i];
        }
        else{
            hash_set[nums[i]] = 1;

        }
        
    }
    return -1;
}
