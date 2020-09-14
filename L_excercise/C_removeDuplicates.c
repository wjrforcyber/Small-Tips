/**
 * Note: Remove Duplicates from Sorted Array
 */
int removeDuplicates(int* nums, int numsSize){
    int Flag = 0;;
    for(int i = 0;i < numsSize-1;i++){
        if(nums[i+1] == nums[i]){
            Flag++;
        }
        nums[i+1-Flag] = nums[i+1];
    }
    numsSize -= Flag;
    return numsSize;
}
