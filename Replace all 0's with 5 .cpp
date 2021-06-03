int reverse(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int rem;
    int num = 0;
    while(n>0){
        rem = n%10;
        if(rem==0)
        rem = 5;
        
        num = num*10 + rem;
        n = n/10;
    }
    return reverse(num);
}
