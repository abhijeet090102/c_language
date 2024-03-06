#include<stdio.h>
int main(){
    int breadth;
    printf("Enter reactangle breadth:");
    scanf("%d", &breadth);
    int length;
    printf("Enter reactangle length:");
    scanf("%d",&length);
    int area = length*breadth ;
    int perimeter = 2*(length+breadth);
    if(area>perimeter){
        printf("Area of rectangle is greater than its primeter");
    }
    else if(area<perimeter){
        printf("Area of rectangle is smaller than its perimeter");
    }
    else if(area==perimeter){
        printf("Area and perimeter of rectangle is same");
    }
    return 0;
}