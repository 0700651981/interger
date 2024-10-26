#include<iostream>
#include<climits>//For INT_MAX and INT-MIN
int reverse(int x){
    int reversedNum=0;
    while(x!=0){
        int lastDigit=x%10;
        x/=10;
        //check for overflow before multiplying reverseNum by 10
        if(reversedNum>INT_MAX/10||(reversedNum==INT_MAX/10&&lastDigit>7)){
            return 0;
        }
        if(reversedNum<INT_MIN/10||(reversedNum==INT_MIN/10&&lastDigit<-8)){
            return 0;
        }
        reversedNum=reversedNum*10+lastDigit;
    }
    return reversedNum;
}
int main(){
    int x;
    std::cout<<"Enter an integer:";
    std::cin>>x;
    int result=reverse(x);
    std::cout<<"Reversed integer:"<<result<<std::endl;
    return 0;
}