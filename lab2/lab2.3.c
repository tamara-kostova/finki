/*Да се напише програма која ќе чита три цели броја (x,y,z) од тастатура и на екран ќе го испечати резултатот од следниот израз
++x - --y + z++ + (x>z) Кој резултат ќе се добие доколку ги нема заградите, т.е. изразот е ++x - --y + z++ + x>z?
    Испечатете го и овај резултат, одделен со празно место од првиот резултат, како во примерот.*/
#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf ("%d ", ++x - --y + z++ + (x>z));
    printf("%d", ++x - --y + z++ + x>z);
return 0;
    }
