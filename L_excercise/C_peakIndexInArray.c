/**
 * Note: If you sure it is a mountain,then return the index of the maxnum is also fine.
 *This written below is much more carefully to make sure it is a mountain.
 */
int peakIndexInMountainArray(int* arr, int arrSize){
    int i,j;
    int Flag;
    int Cover = 0;
    if(arrSize == 0){
        return 0;
    }
    for(i = 0; i < arrSize; i++){
        if(arr[i+1] > arr[i]){
            Flag = i+1;
        }
        else{
            break;
        }
    }
    for(j = Flag; j < arrSize-1; j++){
        if(arr[j+1] < arr[j]){
            Cover++;
        }
        else{
            break;
        }
    }
    if(Flag + Cover + 1 == arrSize){
        return Flag;
    }
    else{
        return 0;
    }
    return 0;

}
