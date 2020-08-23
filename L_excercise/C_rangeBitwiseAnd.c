int rangeBitwiseAnd(int m, int n){
    //My way (*^*)  -out of time - 
	/* 
    int x = m;
    int i;
    if(m == 0){
        return 0;
    }
    for(i = m+1;i <= n; i++){
		x &= i;
	}
    return x;
    */
    
    
    //Learn from others
    /*
    int count = 0;
    while(m < n){
        m = m >> 1;
        n = n >> 1;
        count++;
    }
    return m << count;
    */
    while(m<n){
        n &= (n-1);
    }
    return n;
}
