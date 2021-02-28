/*
CH-230-A
a3 p3.9[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include<stdio.h>

double sum25(double v[], int n){
    
    double sum = 0;

    if(n < 6){
        
        return -111;
        
    }
    
    else{
        
        sum = v[2] + v[5];
        
    }
        
    return sum;
        
}

int main(){
    
    int size;
     
    double list[20], sum;
     
    scanf("%d", &size);
     
    for(int i = 0; i < size; i++){
         
        scanf("%lf", &list[i]);
         
    }
    
    sum = sum25(list,size);
    
    if (sum == -111){
        
        printf("One or both positions are invalid\n");
        
    }
    
    else{
        
        printf("sum=%lf\n", sum);
        
    }
    
    return 0;

}
