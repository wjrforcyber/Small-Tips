/*
 *
 *Search Insert Position
 */ 
int searchInsert(int* nums, int numsSize, int target){
    int i;
    int low = 0;
    int high = numsSize;
    while(target != nums[(low+high)/2]){
        if(target < nums[0]){
            return 0;
        }
        if(low+1 == high){   
            return low+1;
        }
        else if(target < nums[(low+high)/2]){
            high = (low+high)/2;
        }
        else if(target > nums[(low+high)/2]){
            low = (low+high)/2;
        }
    }
    return (low+high)/2;
}
