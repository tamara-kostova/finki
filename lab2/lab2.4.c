/*Во градот постојат 2 такси компании. Едната наплаќа фиксна цена C денари за првите К километри,
а за секој нареден километар наплаќа уште P денари. Другата такси компанија има возила кои возат со брзина V километри во минута,
а наплаќа B денари пред почетокот на возењето, за секој извозен километар уште D денари и дополнително за секоја минута возење
наплаќа М денари. Ваша задача е за даден број на километри до дестинацијата да пресметате со која такси компанија најмногу ви се
исплати да се возите.*/
#include <stdio.h>
int main(){
    int r, c, k, p, v, b, m, d, cena1=0, cena2=0;
    scanf("%d", &r);
    scanf("%d %d %d", &c, &k, &p);
    scanf("%d %d %d %d", &v, &b, &m, &d);
    cena1=c+(r-k)*p;
    cena2=b+(r/v)*m+r*d;
    printf("%d %d", cena1, cena2);
    if (cena1<=cena2) printf("\n1");
    else printf("\n0");
return 0;
    }
