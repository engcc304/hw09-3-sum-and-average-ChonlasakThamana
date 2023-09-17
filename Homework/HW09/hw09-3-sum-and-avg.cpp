/*
    ผู้ใช้กรอกค่า แล้วบันทึกค่าลงไปในอาเรย์(Array1) จากนั้นให้คุณทำการคัดลอกข้อมูลทั้งหมดลงไปในอาเรย์ตัวใหม่(Array2) และให้คุณทำการแสดงข้อมูลในอาเรย์ตัวใหม่ทั้งหมดบนหน้าจอ (เมื่อผู้ใช้กรอก -1 จะถือเป็นการสิ้นสุดการกรอกข้อมูล)
    
    Test case:
        Input value to Array1 [0]: 
            9
        Input value to Array1 [1]: 
            5
        Input value to Array1 [2]: 
            6
        Input value to Array1 [3]: 
            8
        Input value to Array1 [4]: 
            -1
    Output:
        Array1 = 9 5 6 8
        Array2 = 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 9 5 6 8


    Test case:
        Input value to Array1 [0]: 
            7
        Input value to Array1 [1]: 
            -3
        Input value to Array1 [2]: 
            5
        Input value to Array1 [3]: 
            19
        Input value to Array1 [4]: 
            27
        Input value to Array1 [5]: 
            -16
        Input value to Array1 [6]: 
            13
        Input value to Array1 [7]: 
            -7
        Input value to Array1 [8]: 
            -1
    Output:
        Array1 = 7 -3 5 19 27 -16 13 -7
        Array2 = 0 0 0 0 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 7 -3 5 19 27 -16 13 -7

*#include <stdio.h>

int main() {
    // สร้างอาเรย์ Array1 และ Array2
    int Array1[100]; // กำหนดขนาดของอาเรย์ตามที่คุณต้องการ
    int Array2[100];

    int n = 0; // ใช้เก็บจำนวนข้อมูลที่รับเข้าสู่ Array1

    // รับข้อมูลเข้าสู่ Array1
    while (1) {
        int value;
        printf("Input value to Array1: ");
        scanf("%d", &value);

        if (value == -1) {
            break;
        }

        Array1[n] = value;
        n++;
    }

    // แสดงข้อมูลใน Array1
    printf("Array1 = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Array1[i]);
    }
    printf("\n");

    // คัดลอกข้อมูลจาก Array1 ไปยัง Array2
    for (int i = 0; i < n; i++) {
        Array2[i] = Array1[i];
    }

    // แสดงข้อมูลใน Array2
    printf("Array2 = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Array2[i]);
    }
    printf("\n");

    // คุณสามารถเพิ่มข้อความ "--| Copy Data from Array1 to Array2" ได้ตามคำอธิบาย
    printf("--| Copy Data from Array1 to Array2\n");

    // แสดงข้อมูลใน Array2 อีกครั้ง
    printf("Array2 = ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Array2[i]);
    }
    printf("\n");

    return 0;
}
