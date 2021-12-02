/*Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга.
На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.*/
#include <stdio.h>
int cikcak (int n){
while (n>0){
    if (n<100) {if(n%10!=n/10) return 1;}
    int c1=n%10, c2=n/10%10, c3=n/100%10;
    if (!((c1>c2&&c2<c3)||(c1<c2&&c2>c3))) return 0;
    n/=10;
}
return 1;
}
int main()
{
    int n;
    while(scanf("%d", &n))
        if (n>9)
            if (cikcak(n)) printf("%d", n);
    return 0;
}
