class Solution {
public:
    
    bool isPalindrome(int x) {
        
        int reverse = 0; //Init the reverse number to check against x
        
        if (x<0) {return false;} //checking if x is negative// negative cant be palindrome
        
        if (x==0) {return true;} //Check to see if x = 0
        
        if (x != 0  && x%10 ==0) {return false;} //If remainder is 0 when modulated by 10
                                                //numbers like 1000 10 200 3000 or if number doesnt equal 0
        
        
        
        while (x > reverse) { //Checking to first see if x is bigger than 0 
            
            reverse =reverse * 10 + x % 10; // taking the last number of x and assigning it to reverse
            
            x = x / 10; //dividing x by 10

        if (x==reverse) {return true;} //if x = reverse it means the number is palindrome 
        
        if (x==reverse/10) {return true;}// if x = reverse divided by 10 it will also be palindrome
                                        // To handle odd length palindromes like 747
   
        }  
        
        return false;
        
        
    }
      
};
