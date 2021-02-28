/*
CH-230-A
a5 p5.11[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int prime_checker(int n, int i){
    
    //If other numbers return not 0, it's prime
    if (i == 1){

        return 1;

    }

    //Tackle if 1 is inputted.
    else if(i == 1/2){

        return 0;

    }

    else{
        
        //If other numbers perfectly divide, it's not prime.
        if (n % i == 0){
            
            return 0;

        }

        else{
            
            //Recursive call, reduce i by 1 and repeat as above.
            return prime_checker(n, i - 1);

        }  

    }

}
        

int main(){
    
    int x, num;
    scanf("%d", &x);

    /*factors don't exist between x/2 and x so 
    no point checking in that range, checking the 
    first half is enough.*/
    num = prime_checker(x, x / 2);
    
    if (num == 1){
        
        printf("%d is prime\n", x);
            
    }
    
    else{
        
        printf("%d is not prime\n", x);
        
    }

return 0;

}
