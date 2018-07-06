### Operatörler

Operatör dediğimiz şeyler bazı işlemleri yapmamızı sağlayan evresel sembollerdir.

**Aritmatik Operatörler**

Operatör | Açıklama
-------- | --------
(=) | Atama Operatörü
(+) | Toplama Operatörü
(-) | Çıkarma Operatörü
(*) | Çarpma Operatörü
(/) | Bölme Operatörü
(%) | Mod Operatörü

```c++
#include <iostream>

using namespace std;

int main()
{
    int sayi1 = 10, sayi2 = 5;

    cout << "Sayi1 ve Sayi2 nin Toplami: " << sayi1 + sayi2 << endl;
    cout << "Sayi1 ve Sayi2 nin Farki  : " << sayi1 - sayi2 << endl;
    cout << "Sayi1 ve Sayi2 nin Carpimi: " << sayi1 * sayi2 << endl;
    cout << "Sayi1 ve Sayi2 nin Bolumu : " << sayi1 / sayi2 << endl;
    cout << "Sayi1 ve Sayi2 nin Modu   : " << sayi1 % sayi2 << endl;
}
```

```
Sayi1 ve Sayi2 nin Toplami: 15
Sayi1 ve Sayi2 nin Farki  : 5
Sayi1 ve Sayi2 nin Carpimi: 50
Sayi1 ve Sayi2 nin Bolumu : 2
Sayi1 ve Sayi2 nin Modu   : 0
```

Yukarıdaki örnekten anlaşılacağı üzere = operatörü değişkene bir değer atamaya yararken diğer operatörler matematiksel ifadeler 
için kullanılır. 

------------------------------

**Bileşik Operatörler**

Operatör | Açıklama
-------- | --------
(==) | Eşit mi? 
(!=) | Eşit Değil mi?
(<) | Küçük mü?
(>) | Büyük mü?
(<=) | Küçük veya Eşit mi?
(>=) | Büyük veya Eşit mi?

**Az Önemli Not**

Bu operatörler ile ilgili detaylı örnekler ileride yapılacaktır sakinliğinizi koruyun :)

**Biraz Daha Fazla Önemli Not**

Operatörlerin başında ve sonunda parantez işaretli yoktur. Markdown'un azizliği :)