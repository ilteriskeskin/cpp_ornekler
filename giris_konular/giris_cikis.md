### Giriş Çıkış

Fonksiyon | Açıklama
--------- | --------
cout | standart giriş
cin | standart çıkış
cerr | standart error çıkış
clog | standart logging çıkış

**cout** fonksiyonuna artık aşina olduğumuzu düşünüyorum. Bu bölüme gelene kadar epeyce kullandık. 

**cin** ile ilgili henüz hiçbir örnek yapmadık. Kullanıcıyı henüz yazdığımız programlara dahil etmedik. 
Şimdi örneklerimizde **cin** ile kullanıcıdan veri alalım.

```c++
#include <iostream>

using namespace std;

int main()
{
    int yas;

    cout << "Yasinizi Giriniz: ";
    cin >> yas;

    cout << "Yasiniz: " << yas << endl;
}
```

**Ekran Çıktısı**

```
Yasinizi Giriniz: 20
Yasiniz: 20
```

Gördüğünüz gibi **cin** ile kullanıcıdan oldukça kolay bir şekilde veri aldık.

**cin** ile birden fazla veri almamızda mümkündür.

```c++
#include <iostream>

using namespace std;

int main()
{
    int sayi1, sayi2, toplam = 0;

    cout << "Iki adet sayi giriniz: "; 
    cin >> sayi1 >> sayi2;             

    toplam = sayi1 + sayi2;

    cout << "Sayilarin toplami: " << toplam << endl;
}
```

**Ekran Çıktısı:**

```
Iki adet sayi giriniz: 3 5
Sayilarin toplami: 8
```

**Not**

Sayılardan birini girdikten sonra space (boşluk) veya enter (giriş) tuşuna basıp ikinci sayıyı girmelisiniz.
Ardından enter (giriş) tuşuna basınız.

----------------------

**String Girişleri ve Stringstream**

C++ dilinde **string** dediğimiz yapılar insanları başta ürkütür. Aslında görüdüğü gibi değildir. String kullanımı 
geliştiricilerin bizim için hazırladığı kütüphaneler ve fonksiyonlar yardımı ile oldukça kolaylaşmıştır.

```c++
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string mesaj;
    string sozel;
    float fiyat;
    int miktar;

    cout << "Mesajiniz: ";
    getline(cin, mesaj);
    cout << mesaj << endl;

    cout << "Kalem fiyatini giriniz: ";
    getline(cin, sozel);
    stringstream(sozel) >> fiyat;

    cout << "Alacaginiz kalem miktarini giriniz: ";
    getline(cin, sozel);
    stringstream(sozel) >> miktar;

    cout << "Toplam Fiyat: " << miktar * fiyat << endl;
}
```

**Ekran Çıktısı:**

```
Mesajiniz: Merhaba C++
Merhaba C++
Kalem fiyatini giriniz: 10.5
Alacaginiz kalem miktarini giriniz: 3
Toplam Fiyat: 31.5
```

Örnekte gördüğünüz gibi string alınan bir veriyi **stringstream** ile sayısal bir veriye atadık.