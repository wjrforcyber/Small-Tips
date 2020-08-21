/**
 * Note: The returned array must be malloced, assume caller calls free().
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *result;
    result = (int*)malloc(sizeof(int)*2);
    for(i = 0 ; i < numsSize-1 ; i++){
        for(j = i+1; j < numsSize; j++){
            if(nums[i]+nums[j] == target){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
                
            }
        }
    }
    *returnSize = 0;
    return 0;
}
