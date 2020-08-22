/*
 *Water Bottles-Return the maximum number of water bottles you can drink.
*/

int numWaterBottles(int numBottles, int numExchange){
    int DrinkNum = numBottles;
    while(numBottles/numExchange != 0){
        DrinkNum += numBottles/numExchange;
        numBottles = numBottles/numExchange+numBottles%numExchange;        
    }

    return DrinkNum;
}
