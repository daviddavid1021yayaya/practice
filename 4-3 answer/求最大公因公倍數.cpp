
int gcd(int m,int n){
    m = 1515; //m = 1515
    n = 600;  //n = 600
    int r;
    while(n!=0){
        r = m % n; //r = 315
        m = n; //m = 600
        n = r; //n = 315
        
        r = m % n; //r = 285
        m = n; //m = 315
        n = r; //n = 285
        
        r = m % n; //r = 30
        m = n; //m = 285
        n = r; //n = 30
        
        r = m % n; //r = 15
        m = n; //m = 30
        n = r; //n = 15
        
        r = m % n; //r = 0
        m = n; //m = 15
        n = r; //n = 0   
    }
    return m;
}

//lcm 最小公倍數
int lcm(int m, int n) {
    return m * n / gcd(m, n);
}

