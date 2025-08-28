#include <stdio.h>

void plus(int a,int b); //void ไม่ส่งค่ากลับ ใช้ทำงานเสริม เช่น พิมพ์ข้อความ, อัปเดตค่า
int pluss(int a,int b); //int ส่งค่ากลับ ใช้เมื่อผลลัพธ์ต้องนำไปใช้งานต่อ

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    plus(a,b);
    int ans = pluss(a,b);
    printf("%d\n",ans);
    return 0;
}

void plus(int a,int b){
    printf("%d\n",a+b);
}

int pluss(int a,int b){
    return a+b;
}