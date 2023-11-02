//
//  Ufuk Güneþ 220401036 
//  Çanakkale 18 Mart Üniversiyesi
//  4-Band Resistor Calculator
//  Analog Elektrik
//  Project-1
//
#include <stdio.h>
#include <stdlib.h>
float renkSec(float x){
    int x1;
    printf("1-Siyah\n2-Kahverengi\n3-Kirmizi\n4-Turuncu\n5-Sari\n6-Yesil\n7-Mavi\n8-Mor\n9-Gri\n10-Beyaz\nDirencin ilk bant rengini seciniz:");
    scanf("%d",&x1);
    switch(x1){
        case 1:
            return 0;
        case 2:
            return 10;
        case 3:
            return 20;
        case 4:
            return 30;
        case 5:
            return 40;
        case 6:
            return 50;
        case 7:
            return 60;
        case 8:
            return 70;
        case 9:
            return 80;
        case 10:
            return 90;
    }
}
float renkSec2(float y){
    int x2;
    printf("1-Siyah\n2-Kahverengi\n3-Kirmizi\n4-Turuncu\n5-Sari\n6-Yesil\n7-Mavi\n8-Mor\n9-Gri\n10-Beyaz\nDirencin ikinci bant rengini seciniz:");
    scanf("%d",&x2);
    switch(x2){
        case 1:
            return 0;
        case 2:
            return 1;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
        case 6:
            return 5;
        case 7:
            return 6;
        case 8:
            return 7;
        case 9:
            return 8;
        case 10:
            return 9;
        }
}
float renkSec3(float z){
    int x3;
    printf("1-Siyah\n2-Kahverengi\n3-Kirmizi\n4-Turuncu\n5-Sari\n6-Yesil\n7-Mavi\n8-Mor\n9-Gri\n10-Beyaz\n11-Altin\n12-Gumus\nDirencin ucuncu bant rengini seciniz (carpan degeri):");
    scanf("%d",&x3);
    switch(x3){
        case 1:
            return 1;
        case 2:
            return 10;
        case 3:
            return 100;
        case 4:
            return 1000;
        case 5:
            return 10000;
        case 6:
            return 100000;
        case 7:
            return 1000000;
        case 8:
            return 10000000;
        case 9:
            return 100000000;
        case 10:
            return 1000000000;
        case 11:
            return 0,1;
        case 12:
            return 0,01;
        }
}
float renkSec4(float k){
    int x4;
    printf("1-Siyah\n2-Kahverengi\n3-Kirmizi\n4-Yesil\n5-Beyaz\n6-Altin\n7-Gumus\nDirencin ucuncu bant rengini seciniz (tolerans degeri):\n");
    scanf("%d",&x4);
    switch(x4){
        case 1:
            return 0.2;
        case 2:
            return 0.01;
        case 3:
            return 0.02;
        case 4:
            return 0.005;
        case 5:
            return 0.1;
        case 6:
            return 0.05;
        case 7:
            return 0.1;
        }
}
int main()
{
    float a,b,f,e,c,d;
    c=renkSec(c);
    d=renkSec2(d);
    e=renkSec3(e);
    f=renkSec4(f);
    a=((c+d)*e)-(((c+d)*e)*f);
    b=((c+d)*e)+(((c+d)*e)*f);
    printf("Direnc %f ve %f arasinda bir deger alir",a,b);
    return 0;
}
