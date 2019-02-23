#include <stdio.h>
#include <stdlib.h>

// by Nonthwat zaza @ECP1N Rmuit kkc
// collatz Homework code
// 98.99% code
// source code นี้มีจุดประสงค์ให้ใช้เป็นแนวทางในการเขียนโค้ดเท่านั้น แนะนำว่าให้เขียนโค้ดด้วยตัวเองดีกว่า^-^ (ถึงไม่ได้เขียนเองทั้งหมด(ผมก็เหมือนกัน) ก็ไม่เป็นไร ขอให้เข้าใจหลักการของโค้ด เดียวก็จะเขียนได้เอง(ถ้าเขียนเองเวลาอธิบายโค้ดจะง่ายกว่ากันเยอะ^^)  ด้วยความปรารถนาดีจากNonthwat zaza 23/2/2019 11:12 PM


int st,nd,MM=0,Temp,Za; // ตัวแปร โกลบอล

int collatz_loop (long int num) // ให้ za เป็น num
{
    int round=1; // ตัวแปร  โลคอล
    while(num!=1) // ถ้า ไม่เท่ากับ 1
    {
        if((fmod(num,2))==0) // ถ้าหาร 2 เอาเศษ แล้วไม่มีเศษ
        {
            num=num/2; // หาร 2
        }
        else
        {
            num=(num*3)+1; // 3n+1
        }
        round++; // นับรอบ
    }
    return round; // ส่งคืนค่ารอบไป main
}
int main()
{
    printf("Input 1st starter and 2st ender :\n");
    scanf("%d %d", &st,&nd);

    if((st<1000000)&&(nd<1000000)&&(st>=0)&&(nd>=0)&&(st<=nd)) //ถ้า ค่าไม่เกินล้านและไม่เท่ากับ0 และตัวเริ่มน้อยกว่าตัวจบ
    {
        for(Za=st;Za<=nd;Za++) // ให้ Zaมีค่าเท่ากับ ;ตัวเริ่ม ;ถ้า za น้อยกว่าตัวจบ ; za++
            {
                Temp = collatz_loop(Za); // Temp มีค่าเท่ากับ = ผลลัพธ์ฟังชั้นที่นำค่า za ในสมการ หรือค่ารอบ

                if (MM<Temp) // ถ้า ค่าสูงสุดน้อยกว่า Temp
                {
                    MM=Temp; // ให้ค่าสูงสุดเท่ากับ Temp
                }
            }
    printf("%d %d %d",st,nd,MM); // แสดงผล
    }

    return 0;
}
