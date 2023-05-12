#include <stdio.h>
#include <string.h>

int main()
{
    int doru_mu = 0, index;
    char sifre[100] = "berilim";
    char girilensifre[100];
    printf("sifre giriniz: ");
    scanf("%s", girilensifre);
    
    int lengths1 = strlen(sifre);
    int lengths2 = strlen(girilensifre);
    
    
    for(index = 0; index < lengths1; index++) {
        if(sifre[index] != girilensifre[index])
            break;
    }
    
    if(index == lengths1&&lengths1==lengths2)
        printf("sifre dogru");
    else
        printf("sifre yanlis");
        
    return 0;
}
