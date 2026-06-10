#include <stdio.h>
int main(){
    char Name[10];
    printf("Name : ");
    scanf("%[^\n]",Name);
    
    int age;
    printf("Age : ");
    scanf("%d",&age);
    
    char email[20];
    printf("Email : ");
    scanf("%s",email);
    
    long long int phoneno;
    printf("Phone no.: ");
    scanf("%lld",&phoneno);
    
    double sallary;
    printf("Sallry : ");
    scanf("%lf",&sallary);

    float height;
    printf("Height : ");
    scanf("%f", &height);
    
    char address[100];
    printf("Address : ");
    scanf(" %[^\n]", address);
    
    printf("\n\nName is %s.", Name);
    printf("\nAge is %d.",age);
    printf("\nEmail is %s.",email);
    printf("\nPhone no. is %lld.",phoneno);
    printf("\nSallary is %.2lf.",sallary);
    printf("\nHeight is %.1f.",height);
    printf("\nAddress is %s.",address);
    return 0;
}
